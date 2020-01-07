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

/** 
 * This is the controller. It allows you to add some logic when there are events like keys pressed... 
 * It follow an MVC pattern -> Model-View-Controller. The controller allows you to show some changes on the view like colors, results...
 * This file is linked to the C controller (sample_controler.h here). All files are linked -> app files.
**/