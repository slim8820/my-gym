## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = project6

project6_SOURCES = \
	main.c \
	support.c support.h \
	interface.c interface.h \
	callbacks.c callbacks.h \
	verifier.c verifier.h \
	ajout.c ajout.h \
	afficher.c personne.h \
	ajouterFM.c ajouterFM.h \
	ajouterFN.c ajouterFn.h \
	afficherM.c adherant.h \
	afficherN.c personneN.h
  
project6_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

