//#include "stdafx.h"
#include "wkeInputBoxW.h"

int WINAPI WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL _InitVar();
HWND _CreateWindow(HINSTANCE hInst);
int _Run(HWND hWnd);

HINSTANCE _hInstance;
wchar_t *_lpWndMsg;
wchar_t *_lpWndTitle;
wchar_t *_lpDefValue;
int _xPos;
int _yPos;
wchar_t *_lpHelpFile;
int _nHelpIndex;
HWND _hParent;
HWND _hDesktop;
HWND _hEdit, _hBtnOk, _hBtnCancel, _hBtnHelp;
HWND _hMsgText;
RECT _st_rcDesktop;
RECT _st_rcWnd;
HFONT _hWndFont;
wchar_t _szBuffer[256];
wchar_t *_lpWndFontName = L"宋体";
UINT _nMaxSize = 255;
UINT _nEditStyle = WS_BORDER | WS_CHILD | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL;



BOOL _InitInputBoxW(HWND hParent)
{
	if (!hParent)
		return FALSE;
	_hParent = hParent;
	if (!_hInstance)
		return _InitVar();
	return TRUE;
}

BOOL _InitVar()
{
	_hInstance = ::GetModuleHandleW(NULL);
	_hDesktop = ::GetDesktopWindow();
	::GetWindowRect(_hDesktop,&_st_rcDesktop);
	if (!_xPos)
		_xPos = (_st_rcDesktop.right - INPUT_BOX_WIDTH) / 2;
	if (!_yPos)
		_yPos = (_st_rcDesktop.bottom - INPUT_BOX_HEIGHT) / 2;
	return TRUE;
}

#define BUTTON_WIDTH 65
#define ITEM_HEIGHT 20
#define GAP 5

int WINAPI WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	HDC hWndDc;
	WORD uBtnID;

	switch(uMsg)
	{
	case WM_DESTROY:
		if (_hWndFont)
			::DeleteObject(_hWndFont);
		::PostQuitMessage(0);
		break;
	case WM_CREATE:
		RECT rectClient;
		::GetClientRect(hWnd, &rectClient);
		_hMsgText = ::CreateWindowExW(0,
									L"Static",
									_lpWndMsg,
									WS_CHILD | WS_VISIBLE,
									rectClient.left + GAP,
									rectClient.top + GAP,
									rectClient.right - rectClient.left - 2*GAP - BUTTON_WIDTH,
									70,
									hWnd,
									(HMENU)1000,
									_hInstance,
									0);
		_hBtnOk = ::CreateWindowExW(0,
									L"Button",
									L"确定(&K)",
									WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON,
									rectClient.right - GAP - BUTTON_WIDTH,
									rectClient.top + GAP,
									BUTTON_WIDTH,
									ITEM_HEIGHT,
									hWnd,
									(HMENU)IDOK,
									_hInstance,
									0);
		_hBtnCancel = ::CreateWindowExW(0,
										L"Button",
										L"取消(&C)",
										WS_CHILD | WS_VISIBLE,
										rectClient.right - GAP - BUTTON_WIDTH,
										rectClient.top + GAP + ITEM_HEIGHT + GAP,
										BUTTON_WIDTH,
										ITEM_HEIGHT,
										hWnd,
										(HMENU)IDCANCEL,
										_hInstance,
										0);
		_hBtnHelp = ::CreateWindowExW(0,
									 L"Button",
									 L"帮助(&H)",
									 WS_CHILD | WS_VISIBLE,
									 rectClient.right - GAP - BUTTON_WIDTH,
									 rectClient.top + GAP + (ITEM_HEIGHT + GAP)*2,
									 BUTTON_WIDTH,
									 ITEM_HEIGHT,
									 hWnd,
									 (HMENU)IDHELP,
									 _hInstance,
									 0);
		_hEdit = ::CreateWindowExW(WS_EX_CLIENTEDGE,
							      L"Edit",
							      _lpDefValue,
							      _nEditStyle,
							      rectClient.left + GAP,
							      rectClient.bottom - ITEM_HEIGHT - GAP,
							      rectClient.right - rectClient.left - 2*GAP,
							      ITEM_HEIGHT,
							      hWnd,
							      (HMENU)2000,
							      _hInstance,
							      0);
		::SendMessageW(_hEdit, EM_SETLIMITTEXT, _nMaxSize, 0);
		::SendMessage(_hEdit, EM_SETSEL, 0, -1);//全部选择默认文字
		_hWndFont = ::CreateFontW(12,
								 6,
								 0,
								 0,
								 12,
								 0,
								 0,
								 0,
								 GB2312_CHARSET,
								 OUT_DEFAULT_PRECIS,
								 CLIP_DEFAULT_PRECIS,
								 DEFAULT_QUALITY,
								 DEFAULT_PITCH,
								 _lpWndFontName);
		if (!::lstrlenW(_lpHelpFile))
			ShowWindow(_hBtnHelp,SW_HIDE);
		hWndDc = ::GetDC(hWnd);
		::SelectObject(hWndDc,_hWndFont);
		::ReleaseDC(hWnd,hWndDc);
		::SendDlgItemMessageW(hWnd, 1000, WM_SETFONT, (WPARAM)_hWndFont, 0);
		::SendDlgItemMessageW(hWnd, 2000, WM_SETFONT, (WPARAM)_hWndFont, 0);
		::SendDlgItemMessageW(hWnd, IDOK, WM_SETFONT, (WPARAM)_hWndFont, 0);
		::SendDlgItemMessageW(hWnd, IDCANCEL, WM_SETFONT, (WPARAM)_hWndFont, 0);
		::SendDlgItemMessageW(hWnd, IDHELP, WM_SETFONT, (WPARAM)_hWndFont, 0);
		break;
	case WM_KEYDOWN:
		if (wParam == VK_RETURN)
			::SendMessageW(hWnd, WM_COMMAND, IDOK, 0);
		break;
	case WM_SETFOCUS:
		::SetFocus(_hEdit);
		break;
	case WM_COMMAND:
		uBtnID = LOWORD(wParam);
		switch(uBtnID)
		{
		case IDOK:
			::GetDlgItemTextW(hWnd, 2000, _szBuffer, 256);
			::DestroyWindow(hWnd);
			break;
		case IDCANCEL:
			::DestroyWindow(hWnd);
			break;
		case IDHELP:
			::WinHelpW(hWnd, _lpHelpFile, HELP_INDEX, _nHelpIndex);
			break;
		};
		break;
	default:
		return ::DefWindowProcW(hWnd, uMsg, wParam, lParam);
	}
	return (TRUE);
}

HWND _CreateWindow(HINSTANCE hInst)
{
	WNDCLASSEXW st_WndClass;
	HWND hWnd;
	::RtlZeroMemory(&st_WndClass,sizeof(st_WndClass));
	st_WndClass.cbSize        = sizeof(st_WndClass);
	st_WndClass.hInstance     = hInst;
	st_WndClass.hbrBackground = (HBRUSH)COLOR_BTNSHADOW;
	st_WndClass.hCursor       = LoadCursor(0, IDC_ARROW);
	st_WndClass.hIcon         = LoadIcon(0, IDI_APPLICATION);
	st_WndClass.hIconSm       = st_WndClass.hIcon;
	st_WndClass.lpfnWndProc   = (WNDPROC)&WndProc;
	st_WndClass.lpszClassName = L"InputBox_Class";
	st_WndClass.style         = CS_HREDRAW | CS_VREDRAW;
	::RegisterClassExW(&st_WndClass);
	hWnd = ::CreateWindowExW(WS_EX_TOPMOST | WS_EX_TOOLWINDOW,
						    L"InputBox_Class",
						    _lpWndTitle,
						    WS_DLGFRAME | WS_SYSMENU | WS_VISIBLE,
						    _xPos,
						    _yPos,
						    INPUT_BOX_WIDTH,
						    INPUT_BOX_HEIGHT,
						    _hParent,
						    0,
						    hInst,
						    0);
	return hWnd;
}

int _Run(HWND hWnd)
{
	MSG st_Msg;
	if (!hWnd)
		return 0;
	::ShowWindow(hWnd,SW_SHOW);
	::UpdateWindow(hWnd);
	while(::GetMessageW(&st_Msg,0,0,0))
	{
		if (st_Msg.message == WM_KEYDOWN)
		{
			if (st_Msg.wParam == VK_RETURN)
				::SendMessageW(hWnd, st_Msg.message, st_Msg.wParam, st_Msg.wParam);
		}
		::TranslateMessage (&st_Msg) ;
		::DispatchMessageW (&st_Msg) ;
	}
	return st_Msg.wParam;
}

const wchar_t *_InputBoxW(const wchar_t *lpWndMsg,
				const wchar_t *lpWndTitle,
				const wchar_t *lpDefValue,
				int xPos,
				int yPos,
				const wchar_t *lpHelpFile,
				int nHelpIndex)
{
	_lpWndMsg = const_cast<wchar_t *>(lpWndMsg);
	_lpWndTitle = const_cast<wchar_t *>(lpWndTitle);
	_lpDefValue = const_cast<wchar_t *>(lpDefValue);
	_xPos = xPos;
	_yPos = yPos;
	_lpHelpFile = const_cast<wchar_t *>(lpHelpFile);
	_nHelpIndex = nHelpIndex;
	if (!_hInstance)
		_InitVar();
	_Run(_CreateWindow(_hInstance));
	_hInstance = NULL;
	return _szBuffer;
}

void _SetNumberW(BOOL fIsNumber)
{
	if (fIsNumber)
		_nEditStyle |= ES_NUMBER;
}
void _SetLowerCaseW(BOOL fIsLowerCase)
{
	if (fIsLowerCase)
		_nEditStyle |= ES_LOWERCASE;
}
void _SetUpperCaseW(BOOL fIsUpperCase)
{
	if (fIsUpperCase)
		_nEditStyle |= ES_UPPERCASE;
}
void _SetMaxSizeW(unsigned int nLineSize)
{
	if (nLineSize)
		if (nLineSize < _nMaxSize)
			_nMaxSize = nLineSize;
}