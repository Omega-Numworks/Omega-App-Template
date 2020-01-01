#ifndef APPS_SAMPLE_VIEW_H
#define APPS_SAMPLE_VIEW_H

#include <escher.h>

namespace Sample {

class SampleView : public View {
public:
  SampleView();
  void drawRect(KDContext * ctx, KDRect rect) const override;
};

}

#endif
