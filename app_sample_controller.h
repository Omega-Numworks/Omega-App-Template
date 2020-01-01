#ifndef APPS_SAMPLE_CONTROLLER_H
#define APPS_SAMPLE_CONTROLLER_H

#include <escher.h>
#include "sample_view.h"

namespace Sample {

class SampleController : public ViewController {
public:
  sampleController();
  View * view() override;
private:
  SampleView m_sampleView;
};

}

#endif
