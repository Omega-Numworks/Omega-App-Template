apps += Sample::App
app_headers += apps/sample/app.h

app_sample_src = $(addprefix apps/sample/,\
  app.cpp \
  sample_controller.cpp \
  sample_view.cpp \
)

apps_src += $(app_sample_src)

app_images += apps/sample/sample_icon.png

i18n_files += $(call i18n_without_universal_for,sample/base)

$(eval $(call depends_on_image,apps/sample/app.cpp,apps/sample/sample_icon.png))

### The Makefile, is the file who allows you to compile successfully your app.
### If you add files or rename some files, don't forget to change the Makefile!
