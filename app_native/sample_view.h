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

/** 
 * This is the view, it allows you to show an interface on your calc like rect, string... 
 * It follows an MVC pattern -> Model-View-Controller. The view allows you to show some changes on event
 * This file is linked to the C view (sample_view.cpp here). All files are linked -> app files.
**/