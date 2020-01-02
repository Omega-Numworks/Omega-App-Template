#ifndef APPS_SAMPLE_VIEW_H
#define APPS_SAMPLE_VIEW_H

#include <escher.h>

namespace Sample {

class SampleView : public View {
public:
  SampleView();
  void drawRect(KDContext * ctx, KDRect rect) const override;
  void reload();
  void changeColor();
  int numberOfSubviews() const override;
  View * subviewAtIndex(int index) override;
private:
  void layoutSubviews() override;
  BufferTextView m_bufferTextView;
  int m_color;
  KDColor m_kdcolor;
};

}

#endif