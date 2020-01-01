#include "app.h"
#include "../apps_container.h"
#include "sample_icon.h"
#include "../i18n.h"

namespace Sample {

I18n::Message App::Descriptor::name() {
  return I18n::Message::SampleApp;
}

I18n::Message App::Descriptor::upperName() {
  return I18n::Message::SampleAppCapital;
}

const Image * App::Descriptor::icon() {
  return ImageStore::SampleIcon;
}

App * App::Snapshot::unpack(Container * container) {
  return new (container->currentAppBuffer()) App(container, this);
}

void App::Snapshot::reset() {
}

App::Descriptor * App::Snapshot::descriptor() {
  static Descriptor descriptor;
  return &descriptor;
}

void App::didBecomeActive(Window * window) {
  ::App::didBecomeActive(window);
}

void App::willBecomeInactive() {
  ::App::willBecomeInactive();
}


bool App::processEvent(Ion::Events::Event e) {
  return ::App::processEvent(e);
}

App::App(Container * container, Snapshot * snapshot) :
  ::App(snapshot, &m_SampleController),
  m_appsContainer((AppsContainer*) container)
{
}

}
