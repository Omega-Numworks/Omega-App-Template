apps += Hello::App
app_headers += apps/hello/app.h

app_src += $(addprefix apps/app_sample/,\
  app.cpp \
  sample_controller.cpp \
  sample_view.cpp \
)

app_images += apps/app_sample/sample_icon.png

i18n_files += $(addprefix apps/app_sample/,\
	base.de.i18n\
	base.en.i18n\
	base.es.i18n\
	base.fr.i18n\
	base.pt.i18n\
)

$(eval $(call depends_on_image,apps/app_sample/app.cpp,apps/app_sample/sample_icon.png))

### The makefile, is the files who permit to make to compile successfuly your app, 
### if you add files or rename some files, don't forget to change the makefiles !