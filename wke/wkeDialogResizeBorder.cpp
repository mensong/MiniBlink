#include "wkeDialogResizeBorder.h"
#include <tchar.h>

std::map<HWND, HCURSOR> CDialogResizeBorder::ms_mpCursors;
std::map<HWND, int> CDialogResizeBorder::ms_mpHitTestType;
std::map<HWND, CDialogResizeBorder*> CDialogResizeBorder::ms_wndClass;

int CDialogResizeBorder::ms_opaque = 1;

int CDialogResizeBorder::ms_width = 6;
int CDialogResizeBorder::ms_hornDepth = 6;
int CDialogResizeBorder::ms_minOwerWidth = 30;
int CDialogResizeBorder::ms_minOwerHeight = 30;

CDialogResizeBorder::CDialogResizeBorder(HINSTANCE hinst, HWND hwndOwner, int nHitTestType)
{
	m_hWnd = NULL;

	m_hInst = hinst;
	m_hOwnerWnd = hwndOwner;

	m_nHitTestType = nHitTestType;
}

CDialogResizeBorder::~CDialogResizeBorder()
{

}

bool g_bNoticingOwerResize = false;

INT_PTR CALLBACK CDialogResizeBorder::DialogProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_INITDIALOG:
	{
		//设置透明度
		//  设置透明度，第三个参数
		::SetLayeredWindowAttributes(hDlg, 0, ms_opaque, LWA_ALPHA);
		return TRUE;
	}
	break;
	case WM_CLOSE:
	{
		EndDialog(hDlg, 0);
		return TRUE;
	}
	break;
	case WM_SETCURSOR:
	{
		//设置鼠标
		::SetCursor(ms_mpCursors[hDlg]);
		return TRUE;
	}
	break;
	case WM_LBUTTONDOWN:
	{
		//::PostMessage(hDlg, WM_SYSCOMMAND, SC_MOVE | HTCAPTION, 0);
		//鼠标左键按下时拖动窗口并联动主窗口
		HWND hOwer = ms_wndClass[hDlg]->m_hOwnerWnd;
		if (NULL != hOwer)
		{
			::ReleaseCapture();
			LRESULT res = ::SendMessage(hOwer, WM_BORDER_RESIZE_START, (WPARAM)hDlg, (LPARAM)ms_mpHitTestType[hDlg]);
			if (res == S_OK)
			{
				g_bNoticingOwerResize = true;
				::SendMessage(hDlg, WM_SYSCOMMAND, SC_MOVE | HTCAPTION, 0);
			}
			::SendMessage(hDlg, WM_LBUTTONUP, 0, 0);
			return TRUE;
		}
	}
	break;
	case WM_MOVE:
	{
		//拖动的过程
		if (g_bNoticingOwerResize)
		{
			CDialogResizeBorder* pDlg = ms_wndClass[hDlg];
			if (NULL != pDlg)
			{
				LRESULT res = ::SendMessage(pDlg->m_hOwnerWnd, WM_BORDER_RESIZE, (WPARAM)hDlg, (LPARAM)ms_mpHitTestType[hDlg]);
				if (res == S_OK)
				{
					pDlg->resizeWindow();
				}
				return TRUE;
			}
		}
	}
	break;
	case WM_LBUTTONUP:
	{
		//结束拖动窗口
		CDialogResizeBorder* pDlg = ms_wndClass[hDlg];
		if (NULL != pDlg)
		{
			LRESULT res = ::SendMessage(pDlg->m_hOwnerWnd, WM_BORDER_RESIZE_END, (WPARAM)hDlg, (LPARAM)ms_mpHitTestType[hDlg]);
			if (res == S_OK)
			{
				pDlg->resizeWindow();
			}
			g_bNoticingOwerResize = false;
			::PostMessage(hDlg, WM_SYNCBORDER, (WPARAM)false, 0);
			return TRUE;
		}
	}
	break;
	case WM_SYNCBORDER:
	{
		std::map<HWND, CDialogResizeBorder*>::iterator it = ms_wndClass.find(hDlg);
		if (it != ms_wndClass.end())
			it->second->syncBorder((bool)wParam);
		return TRUE;
	}
	break;
	default:
		break;
	}
	return FALSE;
}

void CDialogResizeBorder::syncBorder(bool bCheckShowed /*= true*/)
{
	if (!::IsZoomed(m_hWnd) && !::IsIconic(m_hWnd) &&
		(!bCheckShowed || (bCheckShowed && TRUE == ::IsWindowVisible(m_hWnd)))
		)
	{
		HWND hBorderWnd = m_hWnd;
		if (::IsWindowVisible(m_hWnd) == TRUE)
			::ShowWindow(hBorderWnd, SW_SHOW);
		else
			::ShowWindow(hBorderWnd, SW_HIDE);

		RECT rectWin = { 0 };
		::GetWindowRect(m_hOwnerWnd, &rectWin);
		LONG width = rectWin.right - rectWin.left;
		LONG height = rectWin.bottom - rectWin.top;

		switch (m_nHitTestType)
		{
		case HTLEFT:
			::MoveWindow(hBorderWnd, rectWin.left - GetWidth(), rectWin.top, GetWidth(), height, TRUE);
			break;
		case HTRIGHT:
			::MoveWindow(hBorderWnd, rectWin.right, rectWin.top, GetWidth(), height, TRUE);
			break;
		case HTTOP:
			::MoveWindow(hBorderWnd, rectWin.left, rectWin.top - GetWidth(), width, GetWidth(), TRUE);
			break;
		case HTBOTTOM:
			::MoveWindow(hBorderWnd, rectWin.left, rectWin.bottom, width, GetWidth(), TRUE);
			break;

		case HTTOPLEFT:
			::MoveWindow(hBorderWnd, rectWin.left - GetWidth(), rectWin.top - GetWidth(), GetWidth() + GetHornDepth(), GetWidth() + GetHornDepth(), TRUE);
			break;
		case HTTOPRIGHT:
			::MoveWindow(hBorderWnd, rectWin.right - GetHornDepth(), rectWin.top - GetWidth(), GetWidth() + GetHornDepth(), GetWidth() + GetHornDepth(), TRUE);
			break;
		case HTBOTTOMLEFT:
			::MoveWindow(hBorderWnd, rectWin.left - GetWidth(), rectWin.bottom - GetHornDepth(), GetWidth() + GetHornDepth(), GetWidth() + GetHornDepth(), TRUE);
			break;
		case HTBOTTOMRIGHT:
			::MoveWindow(hBorderWnd, rectWin.right - GetHornDepth(), rectWin.bottom - GetHornDepth(), GetWidth() + GetHornDepth(), GetWidth() + GetHornDepth(), TRUE);
			break;
		default:
			break;
		}

		::SetFocus(m_hOwnerWnd);
	}
	else
	{
		::ShowWindow(m_hWnd, SW_HIDE);
	}
}

void CDialogResizeBorder::resizeWindow()
{
	RECT rectBorder;
	::GetWindowRect(m_hWnd, &rectBorder);

	RECT rectWin = { 0 };
	::GetWindowRect(m_hOwnerWnd, &rectWin);

	switch (m_nHitTestType)
	{
	case HTLEFT:
		rectWin.left = rectBorder.right;
		break;
	case HTRIGHT:
		rectWin.right = rectBorder.left;
		break;
	case HTTOP:
		rectWin.top = rectBorder.bottom;
		break;
	case HTBOTTOM:
		rectWin.bottom = rectBorder.top;
		break;

	case HTTOPLEFT:
		rectWin.left = rectBorder.right - GetHornDepth();
		rectWin.top = rectBorder.bottom - GetHornDepth();
		break;
	case HTTOPRIGHT:
		rectWin.right = rectBorder.left + GetHornDepth();
		rectWin.top = rectBorder.bottom - GetHornDepth();
		break;
	case HTBOTTOMLEFT:
		rectWin.left = rectBorder.right - GetHornDepth();
		rectWin.bottom = rectBorder.top + GetHornDepth();
		break;
	case HTBOTTOMRIGHT:
		rectWin.right = rectBorder.left + GetHornDepth();
		rectWin.bottom = rectBorder.top + GetHornDepth();
		break;
	default:
		break;
	}
	LONG width = rectWin.right - rectWin.left;
	LONG height = rectWin.bottom - rectWin.top;
	if (width < ms_minOwerWidth)
		width = ms_minOwerWidth;
	if (height < ms_minOwerHeight)
		height = ms_minOwerHeight;

	::MoveWindow(m_hOwnerWnd, rectWin.left, rectWin.top, width, height, TRUE);
}

LONG CDialogResizeBorder::GetWidth()
{
	return ((LONG)ms_width / 2) * 2;
}

LONG CDialogResizeBorder::GetHornDepth()
{
	return ms_hornDepth;
}

BOOL CDialogResizeBorder::DoModeless()
{
	HGLOBAL hgbl;
	LPDLGTEMPLATE lpdt;
	LPWORD lpw;
	LPWSTR lpwsz;
	int nchar;

	hgbl = GlobalAlloc(GMEM_ZEROINIT, 1024);
	if (!hgbl)
		return FALSE;

	lpdt = (LPDLGTEMPLATE)GlobalLock(hgbl);

	// Define a dialog box.
	lpdt->style = WS_POPUP;
	lpdt->dwExtendedStyle = WS_EX_LAYERED;
	lpdt->cdit = 0;//3  // number of controls
	lpdt->x = 10;
	lpdt->y = 10;
	lpdt->cx = 100;
	lpdt->cy = 70;

	lpw = (LPWORD)(lpdt + 1);
	*lpw++ = 0;   // no menu
	*lpw++ = 0;   // predefined dialog box class (by default)

	lpwsz = (LPWSTR)lpw;
	nchar = 1 + MultiByteToWideChar(CP_ACP, 0, "BORDER", -1,
		lpwsz, 50);
	lpw += nchar;

	GlobalUnlock(hgbl);

	m_hWnd = CreateDialogIndirect(m_hInst,
		(LPDLGTEMPLATE)hgbl,
		m_hOwnerWnd,
		(DLGPROC)DialogProc);
	if (NULL == m_hWnd)
		return FALSE;

	::ShowWindow(m_hWnd, SW_SHOW);

	GlobalFree(hgbl);


	switch (m_nHitTestType)
	{
	case HTLEFT:
	case HTRIGHT:
	{
		ms_mpCursors[m_hWnd] = ::LoadCursor(NULL, MAKEINTRESOURCE(IDC_SIZEWE));
	}
	break;
	case HTTOP:
	case HTBOTTOM:
	{
		ms_mpCursors[m_hWnd] = ::LoadCursor(NULL, MAKEINTRESOURCE(IDC_SIZENS));
	}
	break;
	case HTTOPLEFT:
	case HTBOTTOMRIGHT:
	{
		ms_mpCursors[m_hWnd] = ::LoadCursor(NULL, MAKEINTRESOURCE(IDC_SIZENWSE));
	}
	break;
	case HTTOPRIGHT:
	case HTBOTTOMLEFT:
	{
		ms_mpCursors[m_hWnd] = ::LoadCursor(NULL, MAKEINTRESOURCE(IDC_SIZENESW));
	}
	break;
	default:
	{
		ms_mpCursors[m_hWnd] = NULL;
	}
	break;
	}

	ms_mpHitTestType[m_hWnd] = m_nHitTestType;
	ms_wndClass[m_hWnd] = this;


	return TRUE;
}

void CDialogResizeBorder::SyncBorder(bool bCheckShowed /*= true*/)
{
	::PostMessage(m_hWnd, WM_SYNCBORDER, (WPARAM)bCheckShowed, 0);
}
