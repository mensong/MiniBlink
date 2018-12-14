#ifndef RequestExtraData_h
#define RequestExtraData_h

#include "platform/network/ResourceRequest.h"

#if (defined ENABLE_WKE) && (ENABLE_WKE == 1)
namespace content {
	class WebPage;
}
#endif

#if (defined ENABLE_CEF) && (ENABLE_CEF == 1)
namespace blink {
class WebLocalFrame;
}
class CefBrowserHostImpl;
#endif

namespace blink {
	class WebLocalFrame;
}

namespace net {

class RequestExtraData : public blink::ExtraData {
public:
    virtual ~RequestExtraData() override
    {

    }
	blink::WebLocalFrame* frame;
#if (defined ENABLE_WKE) && (ENABLE_WKE == 1)
	content::WebPage* page;
#endif
#if (defined ENABLE_CEF) && (ENABLE_CEF == 1)
    CefBrowserHostImpl* browser;
#endif
};

} // net

#endif // RequestExtraData_h