/*
*
* wolar@qq.com
* gergul@qq.com
* http://miniblink.net
* https://github.com/weolar/miniblink49
* https://github.com/gergul/MiniBlink
* https://gergul.github.io/MiniBlink/doc-main.html api文档地址
* licence Apache-2.0
*
*/

#ifndef WKE_H
#define WKE_H

#include "wkedefine.h"

// 以下是wke的导出函数。格式按照【返回类型】【函数名】【参数】来排列

#define WKE_FOR_EACH_DEFINE_FUNCTION(ITERATOR0, ITERATOR1, ITERATOR2, ITERATOR3, ITERATOR4, ITERATOR5, ITERATOR6, ITERATOR11, ITERATOR9) \
    ITERATOR0(void, wkeFinalize, "") \
	ITERATOR0(bool, wkeIsInitialize, "") \
    ITERATOR0(unsigned int, wkeGetVersion, "") \
    ITERATOR0(const utf8*, wkeGetVersionString, "") \
    \
	ITERATOR2(void, wkeGC, wkeWebView webView, long intervalSec, "") \
    ITERATOR2(void, wkeSetResourceGc, wkeWebView webView, long intervalSec, "") \
    \
    ITERATOR5(void, wkeSetFileSystem, WKE_FILE_OPEN pfnOpen, WKE_FILE_CLOSE pfnClose, WKE_FILE_SIZE pfnSize, WKE_FILE_READ pfnRead, WKE_FILE_SEEK pfnSeek, "") \
    \
    ITERATOR2(void, wkeSetClientHandler, wkeWebView webView, const wkeClientHandler* handler, "") \
    ITERATOR1(const wkeClientHandler*, wkeGetClientHandler, wkeWebView webView, "") \
    \
    ITERATOR1(void, wkeConfigure, const wkeSettings* settings, "") \
    \
    ITERATOR2(void, wkeSetViewSettings, wkeWebView webView, const wkeViewSettings* settings, "") \
    ITERATOR3(void, wkeSetDebugConfig, wkeWebView webView, const char* debugString, const char* param, "") \
    \
    ITERATOR0(wkeWebView, wkeCreateWebView, "") \
    ITERATOR1(void, wkeDestroyWebView, wkeWebView webView, "") \
    \
    ITERATOR2(void, wkeSetMemoryCacheEnable, wkeWebView webView, bool b, "") \
    ITERATOR2(void, wkeSetMouseEnabled, wkeWebView webView, bool b, "") \
    ITERATOR2(void, wkeSetTouchEnabled, wkeWebView webView, bool b, "") \
    ITERATOR2(void, wkeSetNavigationToNewWindowEnable, wkeWebView webView, bool b, "") \
    ITERATOR2(void, wkeSetCspCheckEnable, wkeWebView webView, bool b, "") \
    ITERATOR2(void, wkeSetNpapiPluginsEnabled, wkeWebView webView, bool b, "") \
    ITERATOR2(void, wkeSetHeadlessEnabled, wkeWebView webView, bool b, "可以关闭渲染") \
    ITERATOR2(void, wkeSetDragEnable, wkeWebView webView, bool b, "可关闭拖拽文件加载网页") \
    ITERATOR2(void, wkeSetDragDropEnable, wkeWebView webView, bool b, "可关闭拖拽到其他进程") \
    ITERATOR2(void, wkeSetLanguage, wkeWebView webView, const char* language, "可关闭拖拽到其他进程") \
    \
    ITERATOR2(void, wkeSetViewNetInterface, wkeWebView webView, const char* netInterface, "") \
    \
    ITERATOR1(void, wkeSetProxy, const wkeProxy* proxy, "") \
    ITERATOR2(void, wkeSetViewProxy, wkeWebView webView, wkeProxy *proxy, "") \
    \
    ITERATOR1(const char*, wkeGetName, wkeWebView webView, "") \
    ITERATOR2(void, wkeSetName, wkeWebView webView, const char* name, "") \
    \
    ITERATOR2(void, wkeSetHandle, wkeWebView webView, HWND wnd, "") \
    ITERATOR3(void, wkeSetHwndRenderOffset, wkeWebView webView, int x, int y, "") \
    \
    ITERATOR1(bool, wkeIsTransparent, wkeWebView webView, "") \
    ITERATOR2(void, wkeSetTransparent, wkeWebView webView, bool transparent, "") \
    \
    ITERATOR2(void, wkeSetUserAgent, wkeWebView webView, const utf8* userAgent, "") \
    ITERATOR1(const char*, wkeGetUserAgent, wkeWebView webView, "") \
    ITERATOR2(void, wkeSetUserAgentW, wkeWebView webView, const wchar_t* userAgent, "") \
    \
    ITERATOR4(void, wkeShowDevtoolsW, wkeWebView webView, const wchar_t* inspectorPath, wkeOnShowDevtoolsCallback callback, void* param, "") \
    ITERATOR4(void, wkeShowDevtools, wkeWebView webView, const utf8* inspectorPath, wkeOnShowDevtoolsCallback callback, void* param, "") \
    \
    ITERATOR2(void, wkeLoadUrl, wkeWebView webView, const utf8* url, "") \
    ITERATOR2(void, wkeLoadUrlW, wkeWebView webView, const wchar_t* url, "") \
    ITERATOR4(void, wkePostUrl, wkeWebView wkeView, const utf8* url, const char* postData, int postLen, "") \
    ITERATOR4(void, wkePostUrlW, wkeWebView wkeView, const wchar_t* url, const char* postData, int postLen, "") \
	ITERATOR5(void, wkePostUrl2, wkeWebView wkeView, const utf8* url, const char* postData, int postLen, const utf8* contentType, "") \
    ITERATOR5(void, wkePostUrlW2, wkeWebView wkeView, const wchar_t* url, const char* postData, int postLen, const wchar_t* contentType, "") \
    \
    ITERATOR2(void, wkeLoadHtml, wkeWebView webView, const utf8* html, "") \
    ITERATOR3(void, wkeLoadHtmlWithBaseUrl, wkeWebView webView, const utf8* html, const utf8* baseUrl, "") \
    ITERATOR2(void, wkeLoadHTMLW, wkeWebView webView, const wchar_t* html, "") \
    \
    ITERATOR2(void, wkeLoadFile, wkeWebView webView, const utf8* filename, "") \
    ITERATOR2(void, wkeLoadFileW, wkeWebView webView, const wchar_t* filename, "") \
    \
    ITERATOR1(const utf8*, wkeGetUrl, wkeWebView webView, "") \
    ITERATOR2(const utf8*, wkeGetFrameUrl, wkeWebView webView, wkeWebFrameHandle frameId, "") \
	ITERATOR2(wkeWebFrameHandle, wkeGetFrameHandleByUrl, wkeWebView webView, const utf8* url, "根据URL获得对应的frame handle，url参数为全路径地址，不存在则返回NULL") \
    \
    ITERATOR1(bool, wkeIsLoading, wkeWebView webView, "") \
    ITERATOR1(bool, wkeIsLoadSucceeded, wkeWebView webView, "") \
    ITERATOR1(bool, wkeIsLoadFailed, wkeWebView webView, "") \
    ITERATOR1(bool, wkeIsLoadCompleted, wkeWebView webView, "") \
    ITERATOR1(bool, wkeIsDocumentReady, wkeWebView webView, "") \
    ITERATOR1(void, wkeStopLoad, wkeWebView webView, "") \
    ITERATOR1(void, wkeReload, wkeWebView webView, "") \
    ITERATOR2(void, wkeGoToHistoryOffset, wkeWebView webView, int offset, "转到当前偏移的历史记录") \
    ITERATOR2(void, wkeGoToHistoryIndex, wkeWebView webView, int index, "转到指定的历史记录") \
    \
    ITERATOR1(int, wkeGetWebviewId, wkeWebView webView, "") \
    ITERATOR1(bool, wkeIsWebviewAlive, int id, "") \
    \
    ITERATOR3(const utf8*, wkeGetDocumentCompleteUrl, wkeWebView webView, wkeWebFrameHandle frameId, const utf8* partialURL, "") \
    \
    ITERATOR3(wkeMemBuf*, wkeCreateMemBuf, wkeWebView webView, void* buf, size_t length, "") \
    ITERATOR1(void, wkeFreeMemBuf, wkeMemBuf* buf, "") \
    \
    ITERATOR1(const utf8*, wkeGetTitle, wkeWebView webView, "") \
    ITERATOR1(const wchar_t*, wkeGetTitleW, wkeWebView webView, "") \
    \
    ITERATOR1(int, wkeGetWidth, wkeWebView webView, "") \
    ITERATOR1(int, wkeGetHeight, wkeWebView webView, "") \
    ITERATOR1(int, wkeGetContentWidth, wkeWebView webView, "") \
    ITERATOR1(int, wkeGetContentHeight, wkeWebView webView, "") \
    \
    ITERATOR2(void, wkeSetDirty, wkeWebView webView, bool dirty, "") \
    ITERATOR1(bool, wkeIsDirty, wkeWebView webView, "") \
    ITERATOR5(void, wkeAddDirtyArea, wkeWebView webView, int x, int y, int w, int h, "") \
    ITERATOR1(void, wkeLayoutIfNeeded, wkeWebView webView, "") \
    ITERATOR11(void, wkePaint2, wkeWebView webView, void* bits, int bufWid, int bufHei, int xDst, int yDst, int w, int h, int xSrc, int ySrc, bool bCopyAlpha, "") \
    ITERATOR3(void, wkePaint, wkeWebView webView, void* bits, int pitch, "") \
    ITERATOR1(void, wkeRepaintIfNeeded, wkeWebView webView, "") \
    ITERATOR1(HDC, wkeGetViewDC, wkeWebView webView, "") \
    \
    ITERATOR1(bool, wkeCanGoBack, wkeWebView webView, "") \
    ITERATOR1(bool, wkeGoBack, wkeWebView webView, "") \
    ITERATOR1(bool, wkeCanGoForward, wkeWebView webView, "") \
    ITERATOR1(bool, wkeGoForward, wkeWebView webView, "") \
    \
    ITERATOR1(void, wkeEditorSelectAll, wkeWebView webView, "") \
    ITERATOR1(void, wkeEditorUnSelect, wkeWebView webView, "") \
    ITERATOR1(void, wkeEditorCopy, wkeWebView webView, "") \
    ITERATOR1(void, wkeEditorCut, wkeWebView webView, "") \
    ITERATOR1(void, wkeEditorPaste, wkeWebView webView, "") \
    ITERATOR1(void, wkeEditorDelete, wkeWebView webView, "") \
    ITERATOR1(void, wkeEditorUndo, wkeWebView webView, "") \
    ITERATOR1(void, wkeEditorRedo, wkeWebView webView, "") \
    \
    ITERATOR1(const wchar_t*, wkeGetCookieW, wkeWebView webView, "") \
    ITERATOR1(const utf8*, wkeGetCookie, wkeWebView webView, "") \
    ITERATOR3(void, wkeSetCookie, wkeWebView webView, const utf8* url, const utf8* cookie, "cookie格式必须是:Set-cookie: PRODUCTINFO=webxpress; domain=.fidelity.com; path=/; secure") \
    ITERATOR3(void, wkeVisitAllCookie, wkeWebView webView, void* params, wkeCookieVisitor visitor, "") \
    ITERATOR2(void, wkePerformCookieCommand, wkeWebView webView, wkeCookieCommand command, "") \
    ITERATOR2(void, wkeSetCookieEnabled, wkeWebView webView, bool enable, "") \
    ITERATOR1(bool, wkeIsCookieEnabled, wkeWebView webView, "") \
    ITERATOR2(void, wkeSetCookieJarDirectory, wkeWebView webView, const char* path, "设置cookie文件所在的目录（不带文件名）") \
    ITERATOR2(void, wkeSetCookieJarDirectoryW, wkeWebView webView, const wchar_t* path, "设置cookie文件所在的目录（不带文件名）") \
    ITERATOR2(void, wkeSetCookieJarFilePath, wkeWebView webView, const char* path, "") \
    ITERATOR2(void, wkeSetCookieJarFilePathW, wkeWebView webView, const wchar_t* path, "") \
    ITERATOR2(void, wkeSetLocalStorageDirectory, wkeWebView webView, const char* path, "") \
    ITERATOR2(void, wkeSetLocalStorageDirectoryW, wkeWebView webView, const wchar_t* path, "") \
    ITERATOR2(void, wkeAddPluginDirectory, wkeWebView webView, const char* path, "") \
    ITERATOR2(void, wkeAddPluginDirectoryW, wkeWebView webView, const wchar_t* path, "") \
    \
    ITERATOR2(void, wkeSetMediaVolume, wkeWebView webView, float volume, "") \
    ITERATOR1(float, wkeGetMediaVolume, wkeWebView webView, "") \
    \
    ITERATOR5(bool, wkeFireMouseEvent, wkeWebView webView, unsigned int message, int x, int y, unsigned int flags, "") \
    ITERATOR4(bool, wkeFireContextMenuEvent, wkeWebView webView, int x, int y, unsigned int flags, "") \
    ITERATOR5(bool, wkeFireMouseWheelEvent, wkeWebView webView, int x, int y, int delta, unsigned int flags, "") \
    ITERATOR4(bool, wkeFireKeyUpEvent, wkeWebView webView, unsigned int virtualKeyCode, unsigned int flags, bool systemKey, "") \
    ITERATOR4(bool, wkeFireKeyDownEvent, wkeWebView webView, unsigned int virtualKeyCode, unsigned int flags, bool systemKey, "") \
    ITERATOR4(bool, wkeFireKeyPressEvent, wkeWebView webView, unsigned int charCode, unsigned int flags, bool systemKey, "") \
    ITERATOR6(bool, wkeFireWindowsMessage, wkeWebView webView, HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam, LRESULT* result, "") \
    \
    ITERATOR1(void, wkeSetFocus, wkeWebView webView, "") \
    ITERATOR1(void, wkeKillFocus, wkeWebView webView, "") \
    \
    ITERATOR1(wkeRect, wkeGetCaretRect, wkeWebView webView, "") \
    \
    ITERATOR3(jsValue, wkeRunJS, wkeWebView webView, const utf8* script, bool isInClosure, "") \
    ITERATOR3(jsValue, wkeRunJSW, wkeWebView webView, const wchar_t* script, bool isInClosure, "") \
	ITERATOR3(void, wkeRunJsInAllFrames, wkeWebView webView, const utf8* script, bool isInClosure, "在所有frame中执行js，在开发桌面应用使用iframe时很好用") \
    \
    ITERATOR1(jsExecState, wkeGlobalExec, wkeWebView webView, "") \
    ITERATOR2(jsExecState, wkeGetGlobalExecByFrame, wkeWebView webView, wkeWebFrameHandle frameId, "") \
    \
    ITERATOR1(void, wkeSleep, wkeWebView webView, "") \
    ITERATOR1(void, wkeWake, wkeWebView webView, "") \
    ITERATOR1(bool, wkeIsAwake, wkeWebView webView, "") \
    \
    ITERATOR2(void, wkeSetZoomFactor, wkeWebView webView, float factor, "") \
    ITERATOR1(float, wkeGetZoomFactor, wkeWebView webView, "") \
    \
    ITERATOR1(const utf8*, wkeGetString, const wkeString string, "") \
    ITERATOR1(const wchar_t*, wkeGetStringW, const wkeString string, "") \
    \
    ITERATOR3(void, wkeSetString, wkeString string, const utf8* str, size_t len, "") \
    ITERATOR3(void, wkeSetStringW, wkeString string, const wchar_t* str, size_t len, "") \
    \
    ITERATOR2(wkeString, wkeCreateString, const utf8* str, size_t len, "") \
    ITERATOR2(wkeString, wkeCreateStringW, const wchar_t* str, size_t len, "") \
    ITERATOR1(void, wkeDeleteString, wkeString str, "") \
    \
    ITERATOR0(wkeWebView, wkeGetWebViewForCurrentContext, "") \
    ITERATOR3(void, wkeSetUserKeyValue, wkeWebView webView, const char* key, void* value, "") \
    ITERATOR2(void*, wkeGetUserKeyValue, wkeWebView webView, const char* key, "") \
    \
    ITERATOR1(int, wkeGetCursorInfoType, wkeWebView webView, "") \
    ITERATOR5(void, wkeSetDragFiles, wkeWebView webView, const POINT* clintPos, const POINT* screenPos, wkeString files[], int filesCount, "") \
    \
    ITERATOR5(void, wkeSetDeviceParameter, wkeWebView webView, const char* device, const char* paramStr, int paramInt, float paramFloat, "") \
    ITERATOR1(wkeTempCallbackInfo*, wkeGetTempCallbackInfo, wkeWebView webView, "") \
    \
    ITERATOR3(void, wkeOnMouseOverUrlChanged, wkeWebView webView, wkeTitleChangedCallback callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnTitleChanged, wkeWebView webView, wkeTitleChangedCallback callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnUrlChanged, wkeWebView webView, wkeUrlChangedCallback callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnUrlChanged2, wkeWebView webView, wkeUrlChangedCallback2 callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnPaintUpdated, wkeWebView webView, wkePaintUpdatedCallback callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnPaintBitUpdated, wkeWebView webView, wkePaintBitUpdatedCallback callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnAlertBox, wkeWebView webView, wkeAlertBoxCallback callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnConfirmBox, wkeWebView webView, wkeConfirmBoxCallback callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnPromptBox, wkeWebView webView, wkePromptBoxCallback callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnNavigation, wkeWebView webView, wkeNavigationCallback callback, void* param, "") \
    ITERATOR3(void, wkeOnCreateView, wkeWebView webView, wkeCreateViewCallback callback, void* param, "") \
    ITERATOR3(void, wkeOnDocumentReady, wkeWebView webView, wkeDocumentReadyCallback callback, void* param, "") \
    ITERATOR3(void, wkeOnDocumentReady2, wkeWebView webView, wkeDocumentReady2Callback callback, void* param, "") \
    ITERATOR3(void, wkeOnLoadingFinish, wkeWebView webView, wkeLoadingFinishCallback callback, void* param, "") \
    ITERATOR3(void, wkeOnDownload, wkeWebView webView, wkeDownloadCallback callback, void* param, "") \
    ITERATOR3(void, wkeOnConsole, wkeWebView webView, wkeConsoleCallback callback, void* param, "") \
    ITERATOR3(void, wkeSetUIThreadCallback, wkeWebView webView, wkeCallUiThread callback, void* param, "") \
    ITERATOR3(void, wkeOnLoadUrlBegin, wkeWebView webView, wkeLoadUrlBeginCallback callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnNetHookRequest, wkeWebView webView, wkeNetHookRequestCallback callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnDidCreateScriptContext, wkeWebView webView, wkeDidCreateScriptContextCallback callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnWillReleaseScriptContext, wkeWebView webView, wkeWillReleaseScriptContextCallback callback, void* callbackParam, "") \
    ITERATOR3(void, wkeOnWindowClosing, wkeWebView webWindow, wkeWindowClosingCallback callback, void* param, "") \
    ITERATOR3(void, wkeOnWindowDestroy, wkeWebView webWindow, wkeWindowDestroyCallback callback, void* param, "") \
    ITERATOR3(void, wkeOnDraggableRegionsChanged, wkeWebView webView, wkeDraggableRegionsChangedCallback callback, void* param, "") \
    ITERATOR3(void, wkeOnWillMediaLoad, wkeWebView webView, wkeWillMediaLoadCallback callback, void* param, "") \
    ITERATOR3(void, wkeOnStartDragging, wkeWebView webView, wkeStartDraggingCallback callback, void* param, "") \
	ITERATOR3(void, wkeOnResponse, wkeWebView webView, wkeResponseCallback callback, void* param, "") \
    \
    ITERATOR3(void, wkeOnOtherLoad, wkeWebView webView, wkeOnOtherLoadCallback callback, void* param, "") \
    \
    ITERATOR1(bool, wkeIsProcessingUserGesture, wkeWebView webView, "") \
    \
    ITERATOR2(void, wkeNetSetMIMEType, wkeNetJob jobPtr, const char *type, "") \
    ITERATOR2(const char*, wkeNetGetMIMEType, wkeNetJob jobPtr, wkeString mime, "") \
    ITERATOR4(void, wkeNetSetHTTPHeaderFieldW, wkeNetJob jobPtr, const wchar_t* key, const wchar_t* value, bool response, "") \
    ITERATOR4(void, wkeNetSetHTTPHeaderField, wkeNetJob jobPtr, const char* key, const char* value, bool response, "") \
    ITERATOR2(const char*, wkeNetGetHTTPHeaderField, wkeNetJob jobPtr, const char* key, "") \
    ITERATOR3(void, wkeNetSetData, wkeNetJob jobPtr, void *buf, int len, "调用此函数后,网络层收到数据会存储在一buf内,接收数据完成后响应OnNetHookRequest事件.#此调用严重影响性能,慎用" \
        "此函数和wkeNetSetData的区别是，wkeNetHookRequest会在接受到真正网络数据后再调用回调，并允许回调修改网络数据。"\
        "而wkeNetSetData是在网络数据还没发送的时候修改") \
    ITERATOR1(void, wkeNetHookRequest, wkeNetJob jobPtr, "") \
    ITERATOR1(wkeRequestType, wkeNetGetRequestMethod, wkeNetJob jobPtr, "") \
    ITERATOR3(int, wkeNetGetFavicon, wkeWebView webView, wkeOnNetGetFaviconCallback callback, void* param, "") \
    \
    ITERATOR1(void, wkeNetContinueJob, wkeNetJob jobPtr, "")\
    ITERATOR1(const char*, wkeNetGetUrlByJob, wkeNetJob jobPtr, "")\
    ITERATOR1(void, wkeNetCancelRequest, wkeNetJob jobPtr, "")\
    ITERATOR2(void, wkeNetChangeRequestUrl, wkeNetJob jobPtr, const char* url, "")\
    ITERATOR1(void, wkeNetHoldJobToAsynCommit, wkeNetJob jobPtr, "")\
    \
    ITERATOR3(wkeWebUrlRequestPtr, wkeNetCreateWebUrlRequest, const utf8* url, const utf8* method, const utf8* mime, "")\
    ITERATOR3(void, wkeNetAddHTTPHeaderFieldToUrlRequest, wkeWebUrlRequestPtr request, const utf8* name, const utf8* value, "")\
    ITERATOR4(int, wkeNetStartUrlRequest, wkeWebView webView, wkeWebUrlRequestPtr request, void* param, const wkeUrlRequestCallbacks* callbacks, "")\
    ITERATOR1(int, wkeNetGetHttpStatusCode, wkeWebUrlResponsePtr response, "")\
    ITERATOR1(__int64, wkeNetGetExpectedContentLength, wkeWebUrlResponsePtr response, "")\
    ITERATOR1(const utf8*, wkeNetGetResponseUrl, wkeWebUrlResponsePtr response, "")\
    ITERATOR1(void, wkeNetCancelWebUrlRequest, int requestId, "")\
    \
    ITERATOR1(wkePostBodyElements*, wkeNetGetPostBody, wkeNetJob jobPtr, "") \
    ITERATOR2(wkePostBodyElements*, wkeNetCreatePostBodyElements, wkeWebView webView, size_t length, "") \
    ITERATOR1(void, wkeNetFreePostBodyElements, wkePostBodyElements* elements, "") \
    ITERATOR1(wkePostBodyElement*, wkeNetCreatePostBodyElement, wkeWebView webView, "") \
    ITERATOR1(void, wkeNetFreePostBodyElement, wkePostBodyElement* element, "") \
    \
    ITERATOR2(bool, wkeIsMainFrame, wkeWebView webView, wkeWebFrameHandle frameId, "") \
    ITERATOR2(bool, wkeIsWebRemoteFrame, wkeWebView webView, wkeWebFrameHandle frameId, "") \
    ITERATOR1(wkeWebFrameHandle, wkeWebFrameGetMainFrame, wkeWebView webView, "") \
    ITERATOR4(jsValue, wkeRunJsByFrame, wkeWebView webView, wkeWebFrameHandle frameId, const utf8* script, bool isInClosure, "") \
    ITERATOR3(void, wkeInsertCSSByFrame, wkeWebView webView, wkeWebFrameHandle frameId, const utf8* cssText, "") \
    \
    ITERATOR3(void, wkeWebFrameGetMainWorldScriptContext, wkeWebView webView, wkeWebFrameHandle webFrameId, v8ContextPtr contextOut, "") \
    \
    ITERATOR0(v8Isolate, wkeGetBlinkMainThreadIsolate, "") \
    \
    ITERATOR6(wkeWebView, wkeCreateWebWindow, wkeWindowType type, HWND parent, int x, int y, int width, int height, "") \
    ITERATOR1(void, wkeDestroyWebWindow, wkeWebView webWindow, "") \
    ITERATOR1(HWND, wkeGetWindowHandle, wkeWebView webWindow, "") \
    \
    ITERATOR2(void, wkeShowWindow, wkeWebView webWindow, bool show, "") \
    ITERATOR2(void, wkeEnableWindow, wkeWebView webWindow, bool enable, "") \
    \
    ITERATOR5(void, wkeMoveWindow, wkeWebView webWindow, int x, int y, int width, int height, "") \
    ITERATOR1(void, wkeMoveToCenter, wkeWebView webWindow, "") \
    ITERATOR3(void, wkeResizeWindow, wkeWebView webWindow, int width, int height, "") \
	ITERATOR9(void, wkeCreateResizeBorders, wkeWebView webWindow, bool bLeft, bool bTop, bool bRight, bool bBottom, bool bLeftTop, bool bLeftBottom, bool bRightTop, bool bRightBottom, "创建resize的拖拉边") \
    \
    ITERATOR6(wkeWebDragOperation, wkeDragTargetDragEnter, wkeWebView webView, const wkeWebDragData* webDragData, const POINT* clientPoint, const POINT* screenPoint, wkeWebDragOperationsMask operationsAllowed, int modifiers, "") \
    ITERATOR5(wkeWebDragOperation, wkeDragTargetDragOver, wkeWebView webView, const POINT* clientPoint, const POINT* screenPoint, wkeWebDragOperationsMask operationsAllowed, int modifiers, "") \
    ITERATOR1(void, wkeDragTargetDragLeave, wkeWebView webView, "") \
    ITERATOR4(void, wkeDragTargetDrop, wkeWebView webView, const POINT* clientPoint, const POINT* screenPoint, int modifiers, "") \
    ITERATOR4(void, wkeDragTargetEnd, wkeWebView webView, const POINT* clientPoint, const POINT* screenPoint, wkeWebDragOperation operation, "") \
    \
    ITERATOR1(void, wkeUtilSetUiCallback, wkeUiThreadPostTaskCallback callback, "") \
    ITERATOR1(const utf8*, wkeUtilSerializeToMHTML, wkeWebView webView, "") \
    \
    ITERATOR2(void, wkeSetWindowTitle, wkeWebView webWindow, const utf8* title, "") \
    ITERATOR2(void, wkeSetWindowTitleW, wkeWebView webWindow, const wchar_t* title, "") \
    \
    ITERATOR3(void, wkeNodeOnCreateProcess, wkeWebView webView, wkeNodeOnCreateProcessCallback callback, void* param, "") \
    \
    ITERATOR4(void, wkeOnPluginFind, wkeWebView webView, const char* mime, wkeOnPluginFindCallback callback, void* param, "") \
    ITERATOR4(void, wkeAddNpapiPlugin, wkeWebView webView, void* initializeFunc, void* getEntryPointsFunc, void* shutdownFunc, "") \
    \
    ITERATOR1(wkeWebView, wkeGetWebViewByNData, void* ndata, "") \
    \
    ITERATOR5(bool, wkeRegisterEmbedderCustomElement, wkeWebView webView, wkeWebFrameHandle frameId, const char* name, void* options, void* outResult, "") \
    \
    ITERATOR3(void, wkeSetMediaPlayerFactory, wkeWebView webView, wkeMediaPlayerFactory factory, wkeOnIsMediaPlayerSupportsMIMEType callback,"") \
    \
    ITERATOR1(const utf8*, wkeUtilDecodeUrlEscape, const utf8* url, "") \
    \
    ITERATOR3(void, jsBindFunction, const char* name, jsNativeFunction fn, unsigned int argCount, "") \
    ITERATOR2(void, jsBindGetter, const char* name, jsNativeFunction fn, "") \
    ITERATOR2(void, jsBindSetter, const char* name, jsNativeFunction fn, "") \
    \
    ITERATOR4(void, wkeJsBindFunction, const char* name, wkeJsNativeFunction fn, void* param, unsigned int argCount, "") \
    ITERATOR3(void, wkeJsBindGetter, const char* name, wkeJsNativeFunction fn, void* param, "") \
    ITERATOR3(void, wkeJsBindSetter, const char* name, wkeJsNativeFunction fn, void* param, "") \
    \
    ITERATOR1(int, jsArgCount, jsExecState es, "") \
    ITERATOR2(jsType, jsArgType, jsExecState es, int argIdx, "") \
    ITERATOR2(jsValue, jsArg, jsExecState es, int argIdx, "") \
    \
    ITERATOR1(jsType, jsTypeOf, jsValue v, "") \
    ITERATOR1(bool, jsIsNumber, jsValue v, "") \
    ITERATOR1(bool, jsIsString, jsValue v, "") \
    ITERATOR1(bool, jsIsBoolean, jsValue v, "") \
    ITERATOR1(bool, jsIsObject, jsValue v, "") \
    ITERATOR1(bool, jsIsFunction, jsValue v, "") \
    ITERATOR1(bool, jsIsUndefined, jsValue v, "") \
    ITERATOR1(bool, jsIsNull, jsValue v, "") \
    ITERATOR1(bool, jsIsArray, jsValue v, "") \
    ITERATOR1(bool, jsIsTrue, jsValue v, "") \
    ITERATOR1(bool, jsIsFalse, jsValue v, "") \
    \
    ITERATOR2(int, jsToInt, jsExecState es, jsValue v, "") \
    ITERATOR2(float, jsToFloat, jsExecState es, jsValue v, "") \
    ITERATOR2(double, jsToDouble, jsExecState es, jsValue v, "") \
    ITERATOR2(bool, jsToBoolean, jsExecState es, jsValue v, "") \
    ITERATOR3(jsValue, jsArrayBuffer, jsExecState es, char* buffer, size_t size, "") \
    ITERATOR2(wkeMemBuf*, jsGetArrayBuffer, jsExecState es, jsValue value, "") \
    ITERATOR2(const utf8*, jsToTempString, jsExecState es, jsValue v, "") \
    ITERATOR2(const wchar_t*, jsToTempStringW, jsExecState es, jsValue v, "") \
	ITERATOR2(const utf8*, jsToString, jsExecState es, jsValue v, "") \
    ITERATOR2(const wchar_t*, jsToStringW, jsExecState es, jsValue v, "") \
    ITERATOR2(void*, jsToV8Value, jsExecState es, jsValue v, "return v8::Persistent<v8::Value>*") \
    \
    ITERATOR1(jsValue, jsInt, int n, "") \
    ITERATOR1(jsValue, jsFloat, float f, "") \
    ITERATOR1(jsValue, jsDouble, double d, "") \
    ITERATOR1(jsValue, jsBoolean, bool b, "") \
    \
    ITERATOR0(jsValue, jsUndefined, "") \
    ITERATOR0(jsValue, jsNull, "") \
    ITERATOR0(jsValue, jsTrue, "") \
    ITERATOR0(jsValue, jsFalse, "") \
    \
    ITERATOR2(jsValue, jsString, jsExecState es, const utf8* str, "") \
    ITERATOR2(jsValue, jsStringW, jsExecState es, const wchar_t* str, "") \
    ITERATOR1(jsValue, jsEmptyObject, jsExecState es, "") \
    ITERATOR1(jsValue, jsEmptyArray, jsExecState es, "") \
    \
    ITERATOR2(jsValue, jsObject, jsExecState es, jsData* obj, "") \
    ITERATOR2(jsValue, jsFunction, jsExecState es, jsData* obj, "") \
    ITERATOR2(jsData*, jsGetData, jsExecState es, jsValue object, "") \
    \
    ITERATOR3(jsValue, jsGet, jsExecState es, jsValue object, const char* prop, "") \
    ITERATOR4(void, jsSet, jsExecState es, jsValue object, const char* prop, jsValue v, "") \
    \
    ITERATOR3(jsValue, jsGetAt, jsExecState es, jsValue object, int index, "") \
    ITERATOR4(void, jsSetAt, jsExecState es, jsValue object, int index, jsValue v, "") \
    ITERATOR2(jsKeys*, jsGetKeys, jsExecState es, jsValue object, "") \
    ITERATOR2(bool, jsIsJsValueValid, jsExecState es, jsValue object, "") \
    ITERATOR1(bool, jsIsValidExecState, jsExecState es, "") \
    ITERATOR3(void, jsDeleteObjectProp, jsExecState es, jsValue object, const char* prop, "") \
    \
    ITERATOR2(int, jsGetLength, jsExecState es, jsValue object, "") \
    ITERATOR3(void, jsSetLength, jsExecState es, jsValue object, int length, "") \
    \
    ITERATOR1(jsValue, jsGlobalObject, jsExecState es, "") \
    ITERATOR1(wkeWebView, jsGetWebView, jsExecState es, "") \
    \
    ITERATOR2(jsValue, jsEval, jsExecState es, const utf8* str, "") \
    ITERATOR2(jsValue, jsEvalW, jsExecState es, const wchar_t* str, "") \
    ITERATOR3(jsValue, jsEvalExW, jsExecState es, const wchar_t* str, bool isInClosure, "") \
    \
    ITERATOR5(jsValue, jsCall, jsExecState es, jsValue func, jsValue thisObject, jsValue* args, int argCount, "") \
    ITERATOR4(jsValue, jsCallGlobal, jsExecState es, jsValue func, jsValue* args, int argCount, "") \
    \
    ITERATOR2(jsValue, jsGetGlobal, jsExecState es, const char* prop, "") \
    ITERATOR3(void, jsSetGlobal, jsExecState es, const char* prop, jsValue v, "") \
    \
    ITERATOR0(void, jsGC, "") \
    ITERATOR2(bool, jsAddRef, jsExecState es, jsValue val, "") \
    ITERATOR2(bool, jsReleaseRef, jsExecState es, jsValue val, "") \
    ITERATOR1(jsExceptionInfo*, jsGetLastErrorIfException, jsExecState es, "") \
    ITERATOR2(jsValue, jsThrowException, jsExecState es, const utf8* exception, "") \
    ITERATOR1(const utf8*, jsGetCallstack, jsExecState es, "")

#if ENABLE_WKE == 1

WKE_EXTERN_C __declspec(dllexport) void wkeInitialize();
WKE_EXTERN_C __declspec(dllexport) void wkeInitializeEx(const wkeSettings* settings);

WKE_FOR_EACH_DEFINE_FUNCTION(WKE_DECLARE_ITERATOR0, WKE_DECLARE_ITERATOR1, WKE_DECLARE_ITERATOR2, \
	WKE_DECLARE_ITERATOR3, WKE_DECLARE_ITERATOR4, WKE_DECLARE_ITERATOR5, WKE_DECLARE_ITERATOR6, WKE_DECLARE_ITERATOR11, WKE_DECLARE_ITERATOR9)

#else

WKE_FOR_EACH_DEFINE_FUNCTION(WKE_DEFINE_ITERATOR0, WKE_DEFINE_ITERATOR1, WKE_DEFINE_ITERATOR2, \
	WKE_DEFINE_ITERATOR3, WKE_DEFINE_ITERATOR4, WKE_DEFINE_ITERATOR5, WKE_DEFINE_ITERATOR6, WKE_DEFINE_ITERATOR11)

	typedef void (WKE_CALL_TYPE *FN_wkeInitializeEx)(const wkeSettings* settings);

__declspec(selectany) const wchar_t* kWkeDllPath = L"miniblink.dll";

inline void wkeSetWkeDllPath(const wchar_t* dllPath)
{
	kWkeDllPath = dllPath;
}

inline int wkeInitializeEx(const wkeSettings* settings)
{
	HMODULE hMod = LoadLibraryW(kWkeDllPath);

	if (hMod) {
		FN_wkeInitializeEx wkeInitializeExFunc = (FN_wkeInitializeEx)GetProcAddress(hMod, "wkeInitializeEx");
		wkeInitializeExFunc(settings);

		WKE_FOR_EACH_DEFINE_FUNCTION(WKE_GET_PTR_ITERATOR0, WKE_GET_PTR_ITERATOR1, WKE_GET_PTR_ITERATOR2, WKE_GET_PTR_ITERATOR3, \
			WKE_GET_PTR_ITERATOR4, WKE_GET_PTR_ITERATOR5, WKE_GET_PTR_ITERATOR6, WKE_GET_PTR_ITERATOR11);

		return 1;
	}
	return 0;
}

inline void wkeInitialize()
{
	return wkeInitializeEx(((const wkeSettings*)0));
}

#endif

#endif