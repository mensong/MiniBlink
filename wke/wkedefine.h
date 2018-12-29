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

#ifndef WKE_DEFINE_H
#define WKE_DEFINE_H

#include <windows.h>

//////////////////////////////////////////////////////////////////////////
#define WKE_CALL_TYPE __cdecl

typedef struct {
	int x;
	int y;
	int w;
	int h;
} wkeRect;

typedef struct {
	int x;
	int y;
} wkePoint;

typedef enum {
	WKE_LBUTTON = 0x01,
	WKE_RBUTTON = 0x02,
	WKE_SHIFT = 0x04,
	WKE_CONTROL = 0x08,
	WKE_MBUTTON = 0x10,
} wkeMouseFlags;

typedef enum {
	WKE_EXTENDED = 0x0100,
	WKE_REPEAT = 0x4000,
} wkeKeyFlags;

typedef enum {
	WKE_MSG_MOUSEMOVE = 0x0200,
	WKE_MSG_LBUTTONDOWN = 0x0201,
	WKE_MSG_LBUTTONUP = 0x0202,
	WKE_MSG_LBUTTONDBLCLK = 0x0203,
	WKE_MSG_RBUTTONDOWN = 0x0204,
	WKE_MSG_RBUTTONUP = 0x0205,
	WKE_MSG_RBUTTONDBLCLK = 0x0206,
	WKE_MSG_MBUTTONDOWN = 0x0207,
	WKE_MSG_MBUTTONUP = 0x0208,
	WKE_MSG_MBUTTONDBLCLK = 0x0209,
	WKE_MSG_MOUSEWHEEL = 0x020A,
} wkeMouseMsg;

#if !defined(__cplusplus)
#ifndef HAVE_WCHAR_T
typedef unsigned short wchar_t;
#endif

#define bool	_Bool
#define false	0
#define true	1
#endif

#if defined(__cplusplus)
#define WKE_EXTERN_C extern "C" 
#else
#define WKE_EXTERN_C 
#endif

typedef char utf8;
#if !defined(__cplusplus)
typedef void* jsExecState;
#else
struct JsExecStateInfo;
typedef JsExecStateInfo* jsExecState;
#endif
typedef __int64 jsValue;

#if defined(__cplusplus)
namespace wke { class CWebView; };
typedef wke::CWebView* wkeWebView;

namespace wke { class CString; };
typedef wke::CString* wkeString;

#else
struct _tagWkeWebView;
typedef struct _tagWkeWebView* wkeWebView;

struct _tagWkeString;
typedef struct _tagWkeString* wkeString;
#endif

#if defined(__cplusplus)
namespace wke { class WkeMediaPlayer; };
typedef wke::WkeMediaPlayer* wkeMediaPlayer;

namespace wke { class WkeMediaPlayerClient; };
typedef wke::WkeMediaPlayerClient* wkeMediaPlayerClient;
#else
typedef struct _tagWkeMediaPlayer* wkeMediaPlayer;
typedef struct _tagWkeMediaPlayerClient* wkeMediaPlayerClient;
#endif

typedef enum {
	WKE_PROXY_NONE,
	WKE_PROXY_HTTP,
	WKE_PROXY_SOCKS4,
	WKE_PROXY_SOCKS4A,
	WKE_PROXY_SOCKS5,
	WKE_PROXY_SOCKS5HOSTNAME
} wkeProxyType;

typedef struct {
	wkeProxyType type;
	char hostname[100];
	unsigned short port;
	char username[50];
	char password[50];
} wkeProxy;

enum wkeSettingMask {
	WKE_SETTING_PROXY = 1,
	WKE_SETTING_PAINTCALLBACK_IN_OTHER_THREAD = 1 << 2,
};

typedef struct _wkeSettings {
	wkeProxy proxy;
	unsigned int mask;
} wkeSettings;

typedef struct {
	int size;
	unsigned int bgColor;
} wkeViewSettings;

typedef void* wkeWebFrameHandle;

typedef void* (WKE_CALL_TYPE *FILE_OPEN_) (const char* path);
typedef void(WKE_CALL_TYPE *FILE_CLOSE_) (void* handle);
typedef size_t(WKE_CALL_TYPE *FILE_SIZE) (void* handle);
typedef int(WKE_CALL_TYPE *FILE_READ) (void* handle, void* buffer, size_t size);
typedef int(WKE_CALL_TYPE *FILE_SEEK) (void* handle, int offset, int origin);

typedef FILE_OPEN_ WKE_FILE_OPEN;
typedef FILE_CLOSE_ WKE_FILE_CLOSE;
typedef FILE_SIZE WKE_FILE_SIZE;
typedef FILE_READ WKE_FILE_READ;
typedef FILE_SEEK WKE_FILE_SEEK;
typedef bool(WKE_CALL_TYPE *WKE_EXISTS_FILE)(const char * path);

struct _wkeClientHandler; // declare warning fix
typedef void(WKE_CALL_TYPE *ON_TITLE_CHANGED) (const struct _wkeClientHandler* clientHandler, const wkeString title);
typedef void(WKE_CALL_TYPE *ON_URL_CHANGED) (const struct _wkeClientHandler* clientHandler, const wkeString url);

typedef struct _wkeClientHandler {
	ON_TITLE_CHANGED onTitleChanged;
	ON_URL_CHANGED onURLChanged;
} wkeClientHandler;

typedef bool(WKE_CALL_TYPE * wkeCookieVisitor)(
	void* params,
	const char* name,
	const char* value,
	const char* domain,
	const char* path, // If |path| is non-empty only URLs at or below the path will get the cookie value.
	int secure, // If |secure| is true the cookie will only be sent for HTTPS requests.
	int httpOnly, // If |httponly| is true the cookie will only be sent for HTTP requests.
	int* expires // The cookie expiration date is only valid if |has_expires| is true.
	);

typedef enum {
	wkeCookieCommandClearAllCookies,
	wkeCookieCommandClearSessionCookies,
	wkeCookieCommandFlushCookiesToFile,
	wkeCookieCommandReloadCookiesFromFile,
} wkeCookieCommand;

typedef enum {
	WKE_NAVIGATION_TYPE_LINKCLICK,
	WKE_NAVIGATION_TYPE_FORMSUBMITTE,
	WKE_NAVIGATION_TYPE_BACKFORWARD,
	WKE_NAVIGATION_TYPE_RELOAD,
	WKE_NAVIGATION_TYPE_FORMRESUBMITT,
	WKE_NAVIGATION_TYPE_OTHER
} wkeNavigationType;

typedef enum {
	WkeCursorInfoPointer,
	WkeCursorInfoCross,
	WkeCursorInfoHand,
	WkeCursorInfoIBeam,
	WkeCursorInfoWait,
	WkeCursorInfoHelp,
	WkeCursorInfoEastResize,
	WkeCursorInfoNorthResize,
	WkeCursorInfoNorthEastResize,
	WkeCursorInfoNorthWestResize,
	WkeCursorInfoSouthResize,
	WkeCursorInfoSouthEastResize,
	WkeCursorInfoSouthWestResize,
	WkeCursorInfoWestResize,
	WkeCursorInfoNorthSouthResize,
	WkeCursorInfoEastWestResize,
	WkeCursorInfoNorthEastSouthWestResize,
	WkeCursorInfoNorthWestSouthEastResize,
	WkeCursorInfoColumnResize,
	WkeCursorInfoRowResize,
	WkeCursorInfoMiddlePanning,
	WkeCursorInfoEastPanning,
	WkeCursorInfoNorthPanning,
	WkeCursorInfoNorthEastPanning,
	WkeCursorInfoNorthWestPanning,
	WkeCursorInfoSouthPanning,
	WkeCursorInfoSouthEastPanning,
	WkeCursorInfoSouthWestPanning,
	WkeCursorInfoWestPanning,
	WkeCursorInfoMove,
	WkeCursorInfoVerticalText,
	WkeCursorInfoCell,
	WkeCursorInfoContextMenu,
	WkeCursorInfoAlias,
	WkeCursorInfoProgress,
	WkeCursorInfoNoDrop,
	WkeCursorInfoCopy,
	WkeCursorInfoNone,
	WkeCursorInfoNotAllowed,
	WkeCursorInfoZoomIn,
	WkeCursorInfoZoomOut,
	WkeCursorInfoGrab,
	WkeCursorInfoGrabbing,
	WkeCursorInfoCustom
} WkeCursorInfoType;

typedef struct {
	int x;
	int y;
	int width;
	int height;

	bool menuBarVisible;
	bool statusBarVisible;
	bool toolBarVisible;
	bool locationBarVisible;
	bool scrollbarsVisible;
	bool resizable;
	bool fullscreen;
} wkeWindowFeatures;

typedef struct {
	int size;
	void* data;
	size_t length;
} wkeMemBuf;

typedef struct {
	struct Item {
		enum wkeStorageType {
			// String data with an associated MIME type. Depending on the MIME type, there may be
			// optional metadata attributes as well.
			StorageTypeString,
			// Stores the name of one file being dragged into the renderer.
			StorageTypeFilename,
			// An image being dragged out of the renderer. Contains a buffer holding the image data
			// as well as the suggested name for saving the image to.
			StorageTypeBinaryData,
			// Stores the filesystem URL of one file being dragged into the renderer.
			StorageTypeFileSystemFile,
		} storageType;

		// Only valid when storageType == StorageTypeString.
		wkeMemBuf* stringType;
		wkeMemBuf* stringData;

		// Only valid when storageType == StorageTypeFilename.
		wkeMemBuf* filenameData;
		wkeMemBuf* displayNameData;

		// Only valid when storageType == StorageTypeBinaryData.
		wkeMemBuf* binaryData;

		// Title associated with a link when stringType == "text/uri-list".
		// Filename when storageType == StorageTypeBinaryData.
		wkeMemBuf* title;

		// Only valid when storageType == StorageTypeFileSystemFile.
		wkeMemBuf* fileSystemURL;
		__int64 fileSystemFileSize;

		// Only valid when stringType == "text/html".
		wkeMemBuf* baseURL;
	};

	struct Item* m_itemList;
	int m_itemListLength;

	int m_modifierKeyState; // State of Shift/Ctrl/Alt/Meta keys.
	wkeMemBuf* m_filesystemId;
} wkeWebDragData;

typedef enum {
	wkeWebDragOperationNone = 0,
	wkeWebDragOperationCopy = 1,
	wkeWebDragOperationLink = 2,
	wkeWebDragOperationGeneric = 4,
	wkeWebDragOperationPrivate = 8,
	wkeWebDragOperationMove = 16,
	wkeWebDragOperationDelete = 32,
	wkeWebDragOperationEvery = 0xffffffff
} wkeWebDragOperation;

typedef wkeWebDragOperation wkeWebDragOperationsMask;

typedef enum {
	WKE_RESOURCE_TYPE_MAIN_FRAME = 0,       // top level page
	WKE_RESOURCE_TYPE_SUB_FRAME = 1,        // frame or iframe
	WKE_RESOURCE_TYPE_STYLESHEET = 2,       // a CSS stylesheet
	WKE_RESOURCE_TYPE_SCRIPT = 3,           // an external script
	WKE_RESOURCE_TYPE_IMAGE = 4,            // an image (jpg/gif/png/etc)
	WKE_RESOURCE_TYPE_FONT_RESOURCE = 5,    // a font
	WKE_RESOURCE_TYPE_SUB_RESOURCE = 6,     // an "other" subresource.
	WKE_RESOURCE_TYPE_OBJECT = 7,           // an object (or embed) tag for a plugin,or a resource that a plugin requested.
	WKE_RESOURCE_TYPE_MEDIA = 8,            // a media resource.
	WKE_RESOURCE_TYPE_WORKER = 9,           // the main resource of a dedicated worker.
	WKE_RESOURCE_TYPE_SHARED_WORKER = 10,   // the main resource of a shared worker.
	WKE_RESOURCE_TYPE_PREFETCH = 11,        // an explicitly requested prefetch
	WKE_RESOURCE_TYPE_FAVICON = 12,         // a favicon
	WKE_RESOURCE_TYPE_XHR = 13,             // a XMLHttpRequest
	WKE_RESOURCE_TYPE_PING = 14,            // a ping request for <a ping>
	WKE_RESOURCE_TYPE_SERVICE_WORKER = 15,  // the main resource of a service worker.
	WKE_RESOURCE_TYPE_LAST_TYPE
} wkeResourceType;

typedef struct {
	wkeString url;
	wkeString newUrl;
	wkeResourceType resourceType;
	int httpResponseCode;
	wkeString method;
	wkeString referrer;
	void* headers;
} wkeWillSendRequestInfo;

typedef enum {
	wkeHttBodyElementTypeData,
	wkeHttBodyElementTypeFile,
} wkeHttBodyElementType;

typedef struct {
	int size;
	wkeHttBodyElementType type;
	wkeMemBuf* data;
	wkeString filePath;
	__int64 fileStart;
	__int64 fileLength; // -1 means to the end of the file.
} wkePostBodyElement;

typedef struct {
	int size;
	wkePostBodyElement** element;
	size_t elementSize;
	bool isDirty;
} wkePostBodyElements;

typedef struct {
	int size;
	wkeWebFrameHandle frame;
	wkeWillSendRequestInfo* willSendRequestInfo;
	const char* url;
	wkePostBodyElements* postBody;
} wkeTempCallbackInfo;

typedef enum _wkeRequestType {
	kWkeRequestTypeInvalidation,
	kWkeRequestTypeGet,
	kWkeRequestTypePost,
	kWkeRequestTypePut,
} wkeRequestType;

typedef void(WKE_CALL_TYPE*wkeTitleChangedCallback)(wkeWebView webView, void* param, const wkeString title);
typedef void(WKE_CALL_TYPE*wkeURLChangedCallback)(wkeWebView webView, void* param, const wkeString url);
typedef void(WKE_CALL_TYPE*wkeURLChangedCallback2)(wkeWebView webView, void* param, wkeWebFrameHandle frameId, const wkeString url);
typedef void(WKE_CALL_TYPE*wkePaintUpdatedCallback)(wkeWebView webView, void* param, const HDC hdc, int x, int y, int cx, int cy);
typedef void(WKE_CALL_TYPE*wkePaintBitUpdatedCallback)(wkeWebView webView, void* param, const void* buffer, const wkeRect* r, int width, int height);
typedef void(WKE_CALL_TYPE*wkeAlertBoxCallback)(wkeWebView webView, void* param, const wkeString msg);
typedef bool(WKE_CALL_TYPE*wkeConfirmBoxCallback)(wkeWebView webView, void* param, const wkeString msg);
typedef bool(WKE_CALL_TYPE*wkePromptBoxCallback)(wkeWebView webView, void* param, const wkeString msg, const wkeString defaultResult, wkeString result);
typedef bool(WKE_CALL_TYPE*wkeNavigationCallback)(wkeWebView webView, void* param, wkeNavigationType navigationType, const wkeString url);
typedef wkeWebView(WKE_CALL_TYPE*wkeCreateViewCallback)(wkeWebView webView, void* param, wkeNavigationType navigationType, const wkeString url, const wkeWindowFeatures* windowFeatures);
typedef void(WKE_CALL_TYPE*wkeDocumentReadyCallback)(wkeWebView webView, void* param);
typedef void(WKE_CALL_TYPE*wkeDocumentReady2Callback)(wkeWebView webView, void* param, wkeWebFrameHandle frameId);

typedef void(WKE_CALL_TYPE*wkeOnShowDevtoolsCallback)(wkeWebView webView, void* param);

typedef void(WKE_CALL_TYPE*wkeNodeOnCreateProcessCallback)(wkeWebView webView, void* param, const WCHAR* applicationPath, const WCHAR* arguments, STARTUPINFOW* startup);
typedef void(WKE_CALL_TYPE*wkeOnPluginFindCallback)(wkeWebView webView, void* param, const utf8* mime, void* initializeFunc, void* getEntryPointsFunc, void* shutdownFunc);

typedef struct {
	int size;
	int width;
	int height;
	double duration;
} wkeMediaLoadInfo;
typedef void(WKE_CALL_TYPE*wkeWillMediaLoadCallback)(wkeWebView webView, void* param, const char* url, wkeMediaLoadInfo* info);

typedef void(WKE_CALL_TYPE*wkeStartDraggingCallback)(
	wkeWebView webView,
	void* param,
	wkeWebFrameHandle frame,
	const wkeWebDragData* data,
	wkeWebDragOperationsMask mask,
	const void* image,
	const wkePoint* dragImageOffset
	);

typedef void(WKE_CALL_TYPE*wkeUiThreadRunCallback)(HWND hWnd, void* param);
typedef int(WKE_CALL_TYPE*wkeUiThreadPostTaskCallback)(HWND hWnd, wkeUiThreadRunCallback callback, void* param);

typedef enum {
	WKE_DID_START_LOADING,
	WKE_DID_STOP_LOADING,
	WKE_DID_NAVIGATE,
	WKE_DID_NAVIGATE_IN_PAGE,
	WKE_DID_GET_RESPONSE_DETAILS,
	WKE_DID_GET_REDIRECT_REQUEST,
	WKE_DID_POST_REQUEST,
} wkeOtherLoadType;
typedef void(WKE_CALL_TYPE*wkeOnOtherLoadCallback)(wkeWebView webView, void* param, wkeOtherLoadType type, wkeTempCallbackInfo* info);

typedef enum {
	WKE_LOADING_SUCCEEDED,
	WKE_LOADING_FAILED,
	WKE_LOADING_CANCELED
} wkeLoadingResult;

typedef void(WKE_CALL_TYPE*wkeLoadingFinishCallback)(wkeWebView webView, void* param, const wkeString url, wkeLoadingResult result, const wkeString failedReason);
typedef bool(WKE_CALL_TYPE*wkeDownloadCallback)(wkeWebView webView, void* param, const char* url);

typedef enum {
	wkeLevelDebug = 4,
	wkeLevelLog = 1,
	wkeLevelInfo = 5,
	wkeLevelWarning = 2,
	wkeLevelError = 3,
	wkeLevelRevokedError = 6,
	wkeLevelLast = wkeLevelInfo
} wkeConsoleLevel;
typedef void(WKE_CALL_TYPE*wkeConsoleCallback)(wkeWebView webView, void* param, wkeConsoleLevel level, const wkeString message, const wkeString sourceName, unsigned sourceLine, const wkeString stackTrace);

typedef void(WKE_CALL_TYPE*wkeOnCallUiThread)(wkeWebView webView, void* paramOnInThread);
typedef void(WKE_CALL_TYPE*wkeCallUiThread)(wkeWebView webView, wkeOnCallUiThread func, void* param);

typedef wkeMediaPlayer(WKE_CALL_TYPE* wkeMediaPlayerFactory)(wkeWebView webView, wkeMediaPlayerClient client, void* npBrowserFuncs, void* npPluginFuncs);
typedef bool(WKE_CALL_TYPE* wkeOnIsMediaPlayerSupportsMIMEType)(const utf8* mime);

//wkeNet--------------------------------------------------------------------------------------
typedef void* wkeNetJob;

typedef struct wkeWebUrlRequest* wkeWebUrlRequestPtr;
typedef struct wkeWebUrlResponse* wkeWebUrlResponsePtr;

typedef void(WKE_CALL_TYPE* wkeOnUrlRequestWillRedirectCallback)(wkeWebView webView, void* param, wkeWebUrlRequestPtr oldRequest, wkeWebUrlRequestPtr request, wkeWebUrlResponsePtr redirectResponse);
typedef void(WKE_CALL_TYPE* wkeOnUrlRequestDidReceiveResponseCallback)(wkeWebView webView, void* param, wkeWebUrlRequestPtr request, wkeWebUrlResponsePtr response);
typedef void(WKE_CALL_TYPE* wkeOnUrlRequestDidReceiveDataCallback)(wkeWebView webView, void* param, wkeWebUrlRequestPtr request, const char* data, int dataLength);
typedef void(WKE_CALL_TYPE* wkeOnUrlRequestDidFailCallback)(wkeWebView webView, void* param, wkeWebUrlRequestPtr request, const utf8* error);
typedef void(WKE_CALL_TYPE* wkeOnUrlRequestDidFinishLoadingCallback)(wkeWebView webView, void* param, wkeWebUrlRequestPtr request, double finishTime);

typedef struct _wkeUrlRequestCallbacks {
	wkeOnUrlRequestWillRedirectCallback willRedirectCallback;
	wkeOnUrlRequestDidReceiveResponseCallback didReceiveResponseCallback;
	wkeOnUrlRequestDidReceiveDataCallback didReceiveDataCallback;
	wkeOnUrlRequestDidFailCallback didFailCallback;
	wkeOnUrlRequestDidFinishLoadingCallback didFinishLoadingCallback;
} wkeUrlRequestCallbacks;

typedef bool(WKE_CALL_TYPE*wkeLoadUrlBeginCallback)(wkeWebView webView, void* param, const char* url, wkeNetJob job);
typedef void(WKE_CALL_TYPE*wkeNetHookRequestCallback)(wkeWebView webView, void* param, const char* url, wkeNetJob job, void* buf, int len);
typedef void(WKE_CALL_TYPE*wkeDidCreateScriptContextCallback)(wkeWebView webView, void* param, wkeWebFrameHandle frameId, void* context, int extensionGroup, int worldId);
typedef void(WKE_CALL_TYPE*wkeWillReleaseScriptContextCallback)(wkeWebView webView, void* param, wkeWebFrameHandle frameId, void* context, int worldId);
typedef bool(WKE_CALL_TYPE*wkeResponseCallback)(wkeWebView webView, void* param, const char* url, wkeNetJob job);
typedef void(WKE_CALL_TYPE*wkeOnNetGetFaviconCallback)(wkeWebView webView, void* param, const utf8* url, wkeMemBuf* buf);

typedef void* v8ContextPtr;
typedef void* v8Isolate;

//wke window-----------------------------------------------------------------------------------
typedef enum {
	WKE_WINDOW_TYPE_POPUP,
	WKE_WINDOW_TYPE_TRANSPARENT,
	WKE_WINDOW_TYPE_CONTROL

} wkeWindowType;

typedef bool(WKE_CALL_TYPE*wkeWindowClosingCallback)(wkeWebView webWindow, void* param);
typedef void(WKE_CALL_TYPE*wkeWindowDestroyCallback)(wkeWebView webWindow, void* param);

typedef struct {
	RECT bounds;
	bool draggable;
} wkeDraggableRegion;
typedef void(WKE_CALL_TYPE*wkeDraggableRegionsChangedCallback)(wkeWebView webView, void* param, const wkeDraggableRegion* rects, int rectCount);

//JavaScript Bind-----------------------------------------------------------------------------------
#define JS_CALL __fastcall
typedef jsValue(JS_CALL* jsNativeFunction) (jsExecState es);

typedef jsValue(WKE_CALL_TYPE* wkeJsNativeFunction) (jsExecState es, void* param);

typedef enum {
	JSTYPE_NUMBER,
	JSTYPE_STRING,
	JSTYPE_BOOLEAN,
	JSTYPE_OBJECT,
	JSTYPE_FUNCTION,
	JSTYPE_UNDEFINED,
	JSTYPE_ARRAY,
	JSTYPE_NULL,
} jsType;

// cexer JS对象、函数绑定支持
typedef jsValue(WKE_CALL_TYPE*jsGetPropertyCallback)(jsExecState es, jsValue object, const char* propertyName);
typedef bool(WKE_CALL_TYPE*jsSetPropertyCallback)(jsExecState es, jsValue object, const char* propertyName, jsValue value);
typedef jsValue(WKE_CALL_TYPE*jsCallAsFunctionCallback)(jsExecState es, jsValue object, jsValue* args, int argCount);
struct tagjsData; // declare warning fix
typedef void(WKE_CALL_TYPE*jsFinalizeCallback)(struct tagjsData* data);

typedef struct tagjsData {
	char typeName[100];
	jsGetPropertyCallback propertyGet;
	jsSetPropertyCallback propertySet;
	jsFinalizeCallback finalize;
	jsCallAsFunctionCallback callAsFunction;
} jsData;

typedef struct _jsExceptionInfo {
	const utf8* message; // Returns the exception message.
	const utf8* sourceLine; // Returns the line of source code that the exception occurred within.
	const utf8* scriptResourceName; // Returns the resource name for the script from where the function causing the error originates.
	int lineNumber; // Returns the 1-based number of the line where the error occurred or 0 if the line number is unknown.
	int startPosition; // Returns the index within the script of the first character where the error occurred.
	int endPosition; // Returns the index within the script of the last character where the error occurred.
	int startColumn; // Returns the index within the line of the first character where the error occurred.
	int endColumn; // Returns the index within the line of the last character where the error occurred.
	const utf8* callstackString;
} jsExceptionInfo;

typedef struct _jsKeys {
	unsigned int length;
	const char** keys;

#if defined(__cplusplus)
	~_jsKeys();
#endif
} jsKeys;


#if defined(__cplusplus)
namespace wke {

	class IWebView {
	public:
		virtual void destroy() = 0;

		virtual const char* name() const = 0;
		virtual void setName(const char* name) = 0;

		virtual bool isTransparent() const = 0;
		virtual void setTransparent(bool transparent) = 0;

		virtual void loadURL(const utf8* url) = 0;
		virtual void loadURL(const wchar_t* url) = 0;

		virtual void loadHTML(const utf8* html) = 0;
		virtual void loadHTML(const wchar_t* html) = 0;

		virtual void loadFile(const utf8* filename) = 0;
		virtual void loadFile(const wchar_t* filename) = 0;

		virtual const utf8* url() const = 0;

		virtual bool isLoading() const = 0;        /*document load sucessed*/
		virtual bool isLoadFailed() const = 0;    /*document load failed*/
		virtual bool isLoadSucceeded() const = 0;  /*document load complete*/
		virtual bool isDocumentReady() const = 0; /*document ready*/
		virtual void stopLoading() = 0;
		virtual void reload() = 0;

		virtual const utf8* title() = 0;
		virtual const wchar_t* titleW() = 0;

		virtual void resize(int w, int h) = 0;
		virtual int width() const = 0;   /*viewport width*/
		virtual int height() const = 0;  /*viewport height*/

		virtual int contentsWidth() const = 0;  /*contents width*/
		virtual int contentsHeight() const = 0; /*contents height*/

		virtual void setDirty(bool dirty) = 0;
		virtual bool isDirty() const = 0;
		virtual void addDirtyArea(int x, int y, int w, int h) = 0;

		virtual void layoutIfNeeded() = 0;
		virtual void paint(void* bits, int pitch) = 0;

		virtual bool canGoBack() const = 0;
		virtual bool goBack() = 0;
		virtual bool canGoForward() const = 0;
		virtual bool goForward() = 0;

		virtual void editorSelectAll() = 0;
		virtual void editorUnSelect() = 0;
		virtual void editorCopy() = 0;
		virtual void editorCut() = 0;
		virtual void editorPaste() = 0;
		virtual void editorDelete() = 0;
		virtual void editorUndo() = 0;
		virtual void editorRedo() = 0;

		virtual void setCookieEnabled(bool enable) = 0;
		virtual bool isCookieEnabled() const = 0;

		virtual void setMediaVolume(float volume) = 0;
		virtual float mediaVolume() const = 0;

		virtual bool fireMouseEvent(unsigned int message, int x, int y, unsigned int flags) = 0;
		virtual bool fireContextMenuEvent(int x, int y, unsigned int flags) = 0;
		virtual bool fireMouseWheelEvent(int x, int y, int delta, unsigned int flags) = 0;
		virtual bool fireKeyUpEvent(unsigned int virtualKeyCode, unsigned int flags, bool systemKey) = 0;
		virtual bool fireKeyDownEvent(unsigned int virtualKeyCode, unsigned int flags, bool systemKey) = 0;
		virtual bool fireKeyPressEvent(unsigned int virtualKeyCode, unsigned int flags, bool systemKey) = 0;

		virtual void setFocus() = 0;
		virtual void killFocus() = 0;

		virtual wkeRect getCaret() = 0;

		virtual jsValue runJS(const utf8* script, bool isInClosure) = 0;
		virtual jsValue runJS(const wchar_t* script, bool isInClosure) = 0;
		virtual jsExecState globalExec() = 0;

		virtual void sleep() = 0; //moveOffscreen
		virtual void wake() = 0; //moveOnscreen
		virtual bool isAwake() const = 0;

		virtual void setZoomFactor(float factor) = 0;
		virtual float zoomFactor() const = 0;

		virtual void setEditable(bool editable) = 0;

		virtual void setClientHandler(const wkeClientHandler* handler) = 0;
		virtual const wkeClientHandler* getClientHandler() const = 0;
	};

}
#endif

//////////////////////////////////////////////////////////////////////////

#define WKE_DEFINE_ITERATOR0(returnVal, name, description) \
    typedef returnVal(WKE_CALL_TYPE* FN_##name)(); \
    __declspec(selectany) FN_##name name = ((FN_##name)0);

#define WKE_DEFINE_ITERATOR1(returnVal, name, p1, description) \
    typedef returnVal(WKE_CALL_TYPE* FN_##name)(p1); \
    __declspec(selectany) FN_##name name = ((FN_##name)0);

#define WKE_DEFINE_ITERATOR2(returnVal, name, p1, p2, description) \
    typedef returnVal(WKE_CALL_TYPE* FN_##name)(p1, p2); \
    __declspec(selectany) FN_##name name = ((FN_##name)0);

#define WKE_DEFINE_ITERATOR3(returnVal, name, p1, p2, p3, description) \
    typedef returnVal(WKE_CALL_TYPE* FN_##name)(p1, p2, p3); \
    __declspec(selectany) FN_##name name = ((FN_##name)0);

#define WKE_DEFINE_ITERATOR4(returnVal, name, p1, p2, p3, p4, description) \
    typedef returnVal(WKE_CALL_TYPE* FN_##name)(p1, p2, p3, p4); \
    __declspec(selectany) FN_##name name = ((FN_##name)0);

#define WKE_DEFINE_ITERATOR5(returnVal, name, p1, p2, p3, p4, p5, description) \
    typedef returnVal(WKE_CALL_TYPE* FN_##name)(p1, p2, p3, p4, p5); \
    __declspec(selectany) FN_##name name = ((FN_##name)0);

#define WKE_DEFINE_ITERATOR6(returnVal, name, p1, p2, p3, p4, p5, p6, description) \
    typedef returnVal(WKE_CALL_TYPE* FN_##name)(p1, p2, p3, p4, p5, p6); \
    __declspec(selectany) FN_##name name = ((FN_##name)0);

#define WKE_DEFINE_ITERATOR11(returnVal, name, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, description) \
    typedef returnVal(WKE_CALL_TYPE* FN_##name)(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); \
    __declspec(selectany) FN_##name name = ((FN_##name)0);

// ---

#define WKE_DECLARE_ITERATOR0(returnVal, name, description) \
    WKE_EXTERN_C __declspec(dllexport) returnVal WKE_CALL_TYPE name();

#define WKE_DECLARE_ITERATOR1(returnVal, name, p1, description) \
    WKE_EXTERN_C __declspec(dllexport) returnVal WKE_CALL_TYPE name(p1);

#define WKE_DECLARE_ITERATOR2(returnVal, name, p1, p2, description) \
    WKE_EXTERN_C __declspec(dllexport) returnVal WKE_CALL_TYPE name(p1, p2);

#define WKE_DECLARE_ITERATOR3(returnVal, name, p1, p2, p3, description) \
    WKE_EXTERN_C __declspec(dllexport) returnVal WKE_CALL_TYPE name(p1, p2, p3);

#define WKE_DECLARE_ITERATOR4(returnVal, name, p1, p2, p3, p4, description) \
    WKE_EXTERN_C __declspec(dllexport) returnVal WKE_CALL_TYPE name(p1, p2, p3, p4);

#define WKE_DECLARE_ITERATOR5(returnVal, name, p1, p2, p3, p4, p5, description) \
    WKE_EXTERN_C __declspec(dllexport) returnVal WKE_CALL_TYPE name(p1, p2, p3, p4, p5);

#define WKE_DECLARE_ITERATOR6(returnVal, name, p1, p2, p3, p4, p5, p6, description) \
    WKE_EXTERN_C __declspec(dllexport) returnVal WKE_CALL_TYPE name(p1, p2, p3, p4, p5, p6);

#define WKE_DECLARE_ITERATOR9(returnVal, name, p1, p2, p3, p4, p5, p6, p7, p8, p9, description) \
    WKE_EXTERN_C __declspec(dllexport) returnVal WKE_CALL_TYPE name(p1, p2, p3, p4, p5, p6, p7, p8, p9);

#define WKE_DECLARE_ITERATOR11(returnVal, name, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, description) \
    WKE_EXTERN_C __declspec(dllexport) returnVal WKE_CALL_TYPE name(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);

// ---

#define WKE_GET_PTR_ITERATOR(name) \
    name = (FN_##name)GetProcAddress(hMod, #name); \
    if (!name) \
        MessageBoxA(((HWND)0), "wke api not found", #name, 0);

#define WKE_GET_PTR_ITERATOR0(returnVal, name, description) \
    WKE_GET_PTR_ITERATOR(name);

#define WKE_GET_PTR_ITERATOR1(returnVal, name, p1, description) \
    WKE_GET_PTR_ITERATOR(name);

#define WKE_GET_PTR_ITERATOR2(returnVal, name, p1, p2, description) \
    WKE_GET_PTR_ITERATOR(name);

#define WKE_GET_PTR_ITERATOR3(returnVal, name, p1, p2, p3, description) \
    WKE_GET_PTR_ITERATOR(name);

#define WKE_GET_PTR_ITERATOR4(returnVal, name, p1, p2, p3, p4, description) \
    WKE_GET_PTR_ITERATOR(name);

#define WKE_GET_PTR_ITERATOR5(returnVal, name, p1, p2, p3, p4, p5, description) \
    WKE_GET_PTR_ITERATOR(name);

#define WKE_GET_PTR_ITERATOR6(returnVal, name, p1, p2, p3, p4, p5, p6, description) \
    WKE_GET_PTR_ITERATOR(name);

#define WKE_GET_PTR_ITERATOR11(returnVal, name, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, description) \
    WKE_GET_PTR_ITERATOR(name);

#endif // WKE_DEFINE_H

