#include "sample_controller.h"

namespace Sample {

SampleController::SampleController() :
  ViewController(nullptr),
  m_sampleView()
{
}

View * SampleController::view() {
  return &m_sampleView;
}

}
