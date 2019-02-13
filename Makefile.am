
ACLOCAL_AMFLAGS = -I m4

JANSSON_CPPFLAGS= -I$(top_builddir)/compat/jansson-2.5/src -I$(top_srcdir)/compat/jansson-2.5/src

EXTRA_DIST	= example.conf m4/gnulib-cache.m4 \
		  ADL_SDK/readme.txt api-example.php miner.php	\
		  API.class API.java api-example.c hexdump.c \
		  doc/API doc/FAQ doc/GPU doc/SCRYPT doc/windows-build.txt

SUBDIRS		= lib compat ccan

bin_PROGRAMS     = triglav

triglav_CPPFLAGS = $(PTHREAD_FLAGS) -fno-strict-aliasing $(JANSSON_CPPFLAGS)
triglav_LDFLAGS  = $(PTHREAD_FLAGS)
triglav_LDADD    = $(DLOPEN_FLAGS) @LIBCURL_LIBS@ @JANSSON_LIBS@ @PTHREAD_LIBS@ \
		  @OPENCL_LIBS@ @NCURSES_LIBS@ @PDCURSES_LIBS@ @WS2_LIBS@ \
		  @MM_LIBS@ @RT_LIBS@ @MATH_LIBS@ lib/libgnu.a ccan/libccan.a

triglav_CPPFLAGS += -I$(top_builddir)/lib -I$(top_srcdir)/lib @OPENCL_FLAGS@

if !HAVE_WINDOWS
triglav_CPPFLAGS += @LIBCURL_CFLAGS@
endif

triglav_CPPFLAGS += $(ADL_CPPFLAGS)

if USE_GIT_VERSION
GIT_VERSION      := $(shell sh -c 'git describe --abbrev=4 --dirty')
triglav_CPPFLAGS += -DGIT_VERSION=\"$(GIT_VERSION)\"
endif

triglav_SOURCES := triglav.c
triglav_SOURCES	+= api.c
triglav_SOURCES	+= elist.h miner.h compat.h bench_block.h
triglav_SOURCES	+= util.c util.h uthash.h
triglav_SOURCES	+= sha2.c sha2.h
triglav_SOURCES	+= logging.c logging.h
triglav_SOURCES += driver-opencl.c driver-opencl.h
triglav_SOURCES += ocl.c ocl.h
triglav_SOURCES += findnonce.c findnonce.h
triglav_SOURCES += adl.c adl.h adl_functions.h
triglav_SOURCES += pool.c pool.h
triglav_SOURCES += algorithm.c algorithm.h
triglav_SOURCES += scrypt.c scrypt.h
triglav_SOURCES += kernel/*.cl

bin_SCRIPTS	= $(top_srcdir)/kernel/*.cl

