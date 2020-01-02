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

/** 
 * This is the controler, it permit to had some logic when there are event like keys pressed ... 
 * It follow an MVC pattern -> Model - View - Controler. The controler permit to show some change on the view like color, result ...
 * This file is link to the C++ controler (sample_controler.cpp here). All files are link -> app files.
**/