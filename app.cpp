#include "app.h"
#include "apps/apps_container.h"
#include "sample_icon.h"
#include "apps/i18n.h"
#include <assert.h>

namespace Sample {

I18n::Message App::Descriptor::name() {
  return I18n::Message::SampleApp;
}

I18n::Message App::Descriptor::upperName() {
  return I18n::Message::SampleAppCapital;
}

const Image * App::Descriptor::icon() {
  return ImageStore::SampleworldIcon;
}

App::Snapshot::Snapshot()
{
}

App * App::Snapshot::unpack(Container * container) {
  return new App(this);
}

App::Descriptor * App::Snapshot::descriptor() {
  static Descriptor descriptor;
  return &descriptor;
}

void App::Snapshot::reset() {
}

App::App(Snapshot * snapshot) :
  ::App(snapshot, &m_sampleController),
  m_sampleController(this)
{
}

}
