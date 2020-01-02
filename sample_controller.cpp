#include "sample_controller.h"
#include <assert.h>

namespace Sample {

SampleController::SampleController(Responder * parentResponder) :
  ViewController(parentResponder)
{
}

View * SampleController::view() {
  return &m_sampleView;
}

void SampleController::didBecomeFirstResponder() {
}

bool SampleController::handleEvent(Ion::Events::Event event) {
  if (event == Ion::Events::OK || event == Ion::Events::EXE) {
    m_sampleView.changeColor();
    return true;
  }
  return false;
}

}