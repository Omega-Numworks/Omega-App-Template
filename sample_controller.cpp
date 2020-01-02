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
 * This is the controler, it permit to had some logic when there are event like keys pressed ... 
 * It follow an MVC pattern -> Model - View - Controler. The controler permit to show some change on the view like color, result ...
 * This file is link to the C controler (sample_controler.h here). All files are link -> app files.
**/