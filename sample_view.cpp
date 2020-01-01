#include "sample_view.h"
#include <assert.h>

namespace Sample {

SampleView::SampleView() :
  View()
{
}

void SampleView::drawRect(KDContext * ctx, KDRect rect) const {
  ctx->fillRect(bounds(), KDColorWhite);
  
  ctx->drawString("Sample !", KDPointZero);
}

}
