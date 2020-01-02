#ifndef APPS_SAMPLE_CONTROLLER_H
#define APPS_SAMPLE_CONTROLLER_H

#include <escher.h>
#include "sample_view.h"

namespace Sample {

class SampleController : public ViewController {
public:
  SampleController(Responder * parentResponder);
  View * view() override;
  bool handleEvent(Ion::Events::Event event) override;
  void didBecomeFirstResponder() override;
private:
  SampleView m_sampleView;
};

}

#endif

