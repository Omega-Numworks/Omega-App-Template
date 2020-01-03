#include "sample_view.h"
#include "apps/i18n.h"

namespace Sample {

SampleView::SampleView() :
  View(),
  m_bufferTextView(KDFont::LargeFont, 0.5, 0.5, KDColorBlack),
  m_color(3),
  m_kdcolor(Palette::GreyWhite)
{
  m_bufferTextView.setText(I18n::translate(I18n::Message::SampleApp));
  m_bufferTextView.setFrame(KDRect(0, 0, bounds().width(), bounds().height()));
}

void SampleView::drawRect(KDContext * ctx, KDRect rect) const {
  ctx->fillRect(KDRect(0, 0, bounds().width(), bounds().height()), m_kdcolor);
}

void SampleView::reload() {
  switch (m_color) {
    case 0:
      m_kdcolor = Palette::GreyDark;
      break;
    case 1:
      m_kdcolor = Palette::GreyMiddle;
      break;
    case 2:
      m_kdcolor = Palette::GreyBright;
      break;
    default:
      m_kdcolor = Palette::GreyWhite;
  }

  m_bufferTextView.setBackgroundColor(m_kdcolor);

  markRectAsDirty(bounds());
}

void SampleView::changeColor() {
  m_color++;
  if (m_color > 3)
    m_color = 0;

  reload();
}

int SampleView::numberOfSubviews() const {
  return 1;
}

View * SampleView::subviewAtIndex(int index) {
  return &m_bufferTextView;
}

void SampleView::layoutSubviews() {
  m_bufferTextView.setFrame(KDRect(0, 0, bounds().width(), bounds().height()));
}

}

/** 
 * This is the view, it permit to show an interface on your calc like rect, string ... 
 * It follow an MVC pattern -> Model - View - Controler. The view permit to show some change on event
 * This file is link to the C view (sample_view.h here). All files are link -> app files.
**/
