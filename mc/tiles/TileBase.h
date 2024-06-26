#ifndef mc_TileBase_h
#define mc_TileBase_h

#include "public/platform/WebTraceLocation.h"

namespace mc {

class TileBase {
public:
    TileBase() {}
    virtual TileBase* init(void* parent, int xIndex, int yIndex) = 0;
    virtual void ref(const blink::WebTraceLocation&) = 0;
    virtual void unref(const blink::WebTraceLocation&) = 0;
    virtual int xIndex() const = 0;
    virtual int yIndex() const = 0;
};

}

#endif // mc_TileBase_h