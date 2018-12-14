// DialogResizeBorder.h
#ifndef DIALOG_RESIZE_BORDER
#define DIALOG_RESIZE_BORDER
#include <windows.h>
#include <map>

#define WM_BORDER_RESIZE_START WM_USER + 1000//WPARAM:BorderDialog, LPARAM:HitTestType  返回：S_OK生效
#define WM_BORDER_RESIZE_END WM_USER + 1001//WPARAM:BorderDialog, LPARAM:HitTestType  返回：S_OK生效
#define WM_BORDER_RESIZE WM_USER + 1002 //WPARAM:BorderDialog, LPARAM:HitTestType  返回：S_OK生效

#define WM_SYNCBORDER WM_USER + 2000//同步拖拉区域消息


class CDialogResizeBorder
{
public:
	/*nHitTestType:
	HTLEFT
	HTRIGHT
	HTTOP
	HTTOPLEFT
	HTTOPRIGHT
	HTBOTTOM
	HTBOTTOMLEFT
	HTBOTTOMRIGHT
	*/
	CDialogResizeBorder(HINSTANCE hinst, HWND hwndOwner, int nHitTestType);

	~CDialogResizeBorder();

	virtual BOOL DoModeless();

	virtual void SyncBorder(bool bCheckShowed = true);

	inline LONG GetWidth();
	inline LONG GetHornDepth();

public:
	HWND m_hWnd;

	//不透明度，应为 1~255，一般为1（不能为0，否则不能接受鼠标事件），只有调试时设为其它
	static int ms_opaque;

	static int ms_width;//边框宽度
	static int ms_hornDepth;//角的深度，如果要做圆角窗口这个窗口可以调整
	static int ms_minOwerWidth;//窗口最小可调到多小
	static int ms_minOwerHeight;//窗口最小可调到多小

protected:
	// API中注册的消息处理函数，不能是成员函数，因为成员函数有this指针
	static INT_PTR CALLBACK DialogProc(HWND hWnd,
		UINT uMsg, WPARAM wParam, LPARAM lParam);

protected:
	void syncBorder(bool bCheckShowed = true);
	void resizeWindow();

private:
	HWND  m_hOwnerWnd;
	HINSTANCE m_hInst;

	static std::map<HWND, HCURSOR> ms_mpCursors;
	int m_nHitTestType;
	static std::map<HWND, int> ms_mpHitTestType;
	static std::map<HWND, CDialogResizeBorder*> ms_wndClass;

};

#endif // DIALOG_RESIZE_BORDER
