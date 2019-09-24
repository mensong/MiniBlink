
#include "app.h"
#include "path.h"

#include <wke.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>

#include <shellapi.h>
#pragma comment(lib, "shell32.lib")

#include <shlwapi.h>
#pragma comment(lib, "shlwapi.lib")


// 回调：点击了关闭、返回 true 将销毁窗口，返回 false 什么都不做。
bool HandleWindowClosing(wkeWebView webWindow, void* param)
{
	Application* app = (Application*)param;
	bool bExit = (IDYES == MessageBoxW(NULL, L"确定要退出程序吗？", L"wkexe", MB_YESNO | MB_ICONQUESTION));

	if (!bExit)
	{
		//wkeLoadUrl(webWindow, "www.baidu.com");

		//wkeWebView newWin = wkeCreateWebWindow(WKE_WINDOW_TYPE_POPUP, NULL, 0, 0, 800, 600);
		//wkeShowWindow(newWin, true);
		//wkeLoadUrl(newWin, "www.baidu.com");
		//wkeCreateResizeBorders(newWin, true, true, true, true, true, true, true, true);

		wchar_t path[MAX_PATH + 1] = { 0 };
		GetProgramPath(path, MAX_PATH, L"..\\..\\");
		StrCatW(path, L"WebInspector\\inspector.html");
		wkeShowDevtoolsW(webWindow, path, NULL, NULL);
	}

	return bExit;
}

// 回调：窗口已销毁
void HandleWindowDestroy(wkeWebView webWindow, void* param)
{
    Application* app = (Application*)param;
    app->window = NULL;
    PostQuitMessage(0);
}

// 回调：文档加载成功
void HandleDocumentReady(wkeWebView webWindow, void* param)
{
	
}

// 回调：页面标题改变
void HandleTitleChanged(wkeWebView webWindow, void* param, const wkeString title)
{
    wkeSetWindowTitleW(webWindow, wkeGetStringW(title));
}

// 回调：创建新的页面，比如说调用了 window.open 或者点击了 <a target="_blank" .../>
wkeWebView HandleCreateView(wkeWebView webWindow, void* param, wkeNavigationType navType, const wkeString url, const wkeWindowFeatures* features)
{
    wkeWebView newWindow = wkeCreateWebWindow(WKE_WINDOW_TYPE_POPUP, NULL, features->x, features->y, features->width, features->height);
    wkeShowWindow(newWindow, true);
    return newWindow;
}

bool HandleLoadUrlBegin(wkeWebView webView, void* param, const char *url, void *job)
{
	if (strcmp(url, "http://hook.test/") == 0) {
		wkeNetSetMIMEType(job, "text/html");
        wkeNetChangeRequestUrl(job, url);
		const char* pHtml = "<html><body><li>这是个hook页面</li><a href=\"https://www.baidu.com/\">HookRequest</a></body></html>";
		wkeNetSetData(job, (void*)pHtml, strlen(pHtml) + 1);
		return true;
	}
	else if (strcmp(url, "https://www.baidu.com/") == 0) {
		wkeNetHookRequest(job);
	}
	else if (strcmp(url, "https://www.hao123.com/") == 0) {
		wkeNetChangeRequestUrl(job, "https://www.baidu.com");
	}
	else if (strcmp(url, "https://www.google.com/") == 0) {
		return true;
	}

	wkeNetSetHTTPHeaderField(job, "Gergul", "Gergul123", false);
	
	return false;
}

void NetHookRequest(wkeWebView webView, void* param, const char *url, void *job, void* buf, int len)
{
	wchar_t *str = L"百度一下";
	wchar_t *str1 = L"HOOK一下";

	int slen = ::WideCharToMultiByte(CP_UTF8, 0, str, -1, NULL, 0, NULL, NULL);
	if (slen == 0) return;
	char utf81[100];
	::WideCharToMultiByte(CP_UTF8, 0, str, -1, &utf81[0], slen, NULL, NULL);

	slen = ::WideCharToMultiByte(CP_UTF8, 0, str1, -1, NULL, 0, NULL, NULL);
	if (slen == 0) return;
	char utf82[100];
	::WideCharToMultiByte(CP_UTF8, 0, str1, -1, &utf82[0], slen, NULL, NULL);

	const char *b = strstr(static_cast<const char*>(buf), &utf81[0]);
	if (NULL != b)
		memcpy((void *)b, &utf82, slen);

	return ;
}

bool HandleNetResponse(wkeWebView webView, void* param, const char* url, wkeNetJob job)
{

	return false;
}

void HandleNetGetFavicon(wkeWebView webView, void* param, const utf8* url, wkeMemBuf* buf)
{
	printf(url);
}

void HandleConsole(wkeWebView webView, void* param, wkeConsoleLevel level, const wkeString message,
	const wkeString sourceName, unsigned sourceLine, const wkeString stackTrace)
{
	
}

bool HandleResponse(wkeWebView webView, void* param, const char* url, wkeNetJob job)
{
	//这里不能执行js的内容，有可能会出错
	jsExecState es = wkeGlobalExec(webView);

	return false;
}

// 创建主页面窗口
BOOL CreateWebWindow(Application* app)
{
    if (app->transparent)
        app->window = wkeCreateWebWindow(WKE_WINDOW_TYPE_TRANSPARENT, NULL, 0, 0, 800, 600);
    else
        app->window = wkeCreateWebWindow(WKE_WINDOW_TYPE_POPUP, NULL, 0, 0, 800, 600);

	if (!app->window)
		return FALSE;

    wkeOnWindowClosing(app->window, HandleWindowClosing, app);
    wkeOnWindowDestroy(app->window, HandleWindowDestroy, app);
    wkeOnDocumentReady(app->window, HandleDocumentReady, app);
    wkeOnTitleChanged(app->window, HandleTitleChanged, app);
    wkeOnCreateView(app->window, HandleCreateView, app);
	wkeOnLoadUrlBegin(app->window, HandleLoadUrlBegin, app);
	wkeOnNetHookRequest(app->window, NetHookRequest, app);
	wkeOnResponse(app->window, HandleNetResponse, app);
	wkeNetGetFavicon(app->window, HandleNetGetFavicon, app);
	wkeOnConsole(app->window, HandleConsole, app);
	wkeOnResponse(app->window, HandleResponse, app);

    wkeMoveToCenter(app->window);
	wkeShowWindow(app->window, true);

	//wkeSetCookieJarDirectory(app->window, L"D:\\");
	//wkeSetCookieJarFilePath(app->window, "D:\\123\\1.cookie");
	//wkeSetLocalStorageDirectory(app->window, "D:\\123");


    wkeLoadUrlW(app->window, app->url);

	if (app->transparent)
		wkeCreateResizeBorders(app->window, true, true, true, true, true, true, true, true);

	//wkeSetMouseEnabled(app->window, false);
	//wkeSetTransparent(app->window, true);
    return TRUE;
}

void Quit(Application* app)
{
    PostQuitMessage(0);
}

void RunMessageLoop(Application* app)
{
    MSG msg = { 0 };
    while (GetMessageW(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
}

jsValue WKE_CALL_TYPE js_foo(jsExecState es, void* param)
{
	Application* app = (Application*)param;
	//wkeEditorSelectAll(app->window);
	wkeGoToHistoryIndex(app->window, 1);
	//wkeGoToHistoryOffset(app->window, -2);
	return jsUndefined();
}

static int s_myVal = 1988;
jsValue JS_CALL js_getMyVal(jsExecState es)
{
	return jsInt(s_myVal);
}

jsValue JS_CALL js_setMyVal(jsExecState es)
{
	s_myVal = jsToInt(es, jsArg(es, 0));

	return jsUndefined();
}

jsValue WKE_CALL_TYPE js_getMyVal(jsExecState es, void* param)
{
	return jsInt(s_myVal);
}

jsValue WKE_CALL_TYPE js_setMyVal(jsExecState es, void* param)
{
	s_myVal = jsToInt(es, jsArg(es, 0));

	return jsUndefined();
}

jsValue WKE_CALL_TYPE js_loadUrl(jsExecState es, void* param)
{
	Application* app = (Application*)param;

	int nArgc = jsArgCount(es);
	if (nArgc == 1)
	{
		const utf8* url = jsToString(es, jsArg(es, 0));
		wkeLoadUrl(app->window, url);
	}

	return jsUndefined();
}

/*
  js调用：postUrl('http://xxxx', 'data', 'content type');
*/
jsValue WKE_CALL_TYPE js_postUrl(jsExecState es, void* param)
{
	Application* app = (Application*)param;

	int nArgc = jsArgCount(es);
	if (nArgc == 3)
	{
		const utf8* url = jsToString(es, jsArg(es, 0));
		const utf8* data = jsToString(es, jsArg(es, 1));
		const utf8* dataType = jsToString(es, jsArg(es, 2));
		wkePostUrl2(app->window, url, data, strlen(data), dataType);
	}

	return jsUndefined();
}

jsValue WKE_CALL_TYPE js_wkeShowDevtools(jsExecState es, void* param)
{
	Application* app = (Application*)param;

	int nArgc = jsArgCount(es);
	if (nArgc == 1)
	{
		jsValue jv0 = jsArg(es, 0);
		if (!jsIsString(jv0))
			return jsBoolean(false);
		const utf8* path = jsToString(es, jv0);
		std::string sPath;
		std::string sPathUpper = path;
		std::transform(sPathUpper.begin(), sPathUpper.end(), sPathUpper.begin(), ::toupper);
		if (sPathUpper.substr(0, strlen("FILE://")) != "FILE://" &&
			sPathUpper.substr(0, strlen("HTTP")) != "HTTP")
		{//处理相对路径的问题
			if (sPathUpper.size() >= 4 && sPathUpper[1] != ':')
			{//相对路径
				char dir[MAX_PATH] = { 0 };
				GetCurrentDirectoryA(MAX_PATH, dir);
				sPath = dir;
				sPath += "\\";
				sPath += path;
			}
			else
			{
				sPath = path;
			}
		}
		else
		{
			sPath = path;
		}

		wkeShowDevtools(app->window, sPath.c_str(), NULL, NULL);
		return jsBoolean(true);
	}
	return jsBoolean(false);
}

void InitJsBinding(Application* app)
{
	wkeJsBindFunction("foo", js_foo, app, 1);
	jsBindGetter("myVal", js_getMyVal);
	jsBindSetter("myVal", js_setMyVal);
	wkeJsBindGetter("wmyVal", js_getMyVal, NULL);
	wkeJsBindSetter("wmyVal", js_setMyVal, NULL);
	wkeJsBindFunction("loadUrl", js_loadUrl, app, 1);
	wkeJsBindFunction("postUrl", js_postUrl, app, 3);
	wkeJsBindFunction("wkeShowDevtools", js_wkeShowDevtools, app, 1);
}

void RunApplication(Application* app)
{
    memset(app, 0, sizeof(Application));

	app->transparent = false;//窗口不透明

	//打开默认页面
	wcsncpy_s(app->url, MAX_PATH, L"https://www.baidu.com", MAX_PATH);

	InitJsBinding(app);

    if (!CreateWebWindow(app))
    {
        Quit(app);
        return;
    }

    RunMessageLoop(app);
}

void QuitApplication(Application* app)
{
    if (app->window)
    {
        wkeDestroyWebWindow(app->window);
        app->window = NULL;
    }
}
