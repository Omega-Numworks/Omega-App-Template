apps += Sample::App
app_headers += apps/sample/app.h

app_src += $(addprefix apps/sample/,\
  app.cpp \
  sample_controller.cpp \
  sample_view.cpp \
)

app_images += apps/sample/sample_icon.png

i18n_files += $(addprefix apps/sample/,\
	base.de.i18n\
	base.en.i18n\
	base.es.i18n\
	base.fr.i18n\
	base.pt.i18n\
	base.hu.i18n\
)

$(eval $(call depends_on_image,apps/sample/app.cpp,apps/sample/sample_icon.png))

### The Makefile, is the file who allows you to compile successfully your app.
### If you add files or rename some files, don't forget to change the Makefile!
