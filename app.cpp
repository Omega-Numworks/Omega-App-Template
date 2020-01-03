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
  return ImageStore::SampleIcon;
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

/** 
 * This is the app files, it permit to to add a name, some description, an icon to your app. But also your logic (controler) and your view 
 * It follow an MVC pattern -> Model - View - Controler. The app files permit to link all the MVC files
 * This file is link to the C view (app.h here). All files are link -> app files.
**/

