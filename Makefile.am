ACLOCAL_AMFLAGS = -I m4

lib_LTLIBRARIES = librgxg.la
librgxg_la_CFLAGS = -I$(top_srcdir)/include  -I$(top_srcdir)/lib
librgxg_la_SOURCES = lib/number.c
librgxg_la_LDFLAGS = -version-info $(LIB_CURRENT):$(LIB_REVISION):$(LIB_AGE)

librgxgincludedir = $(includedir)/rgxg/
librgxginclude_HEADERS = include/rgxg/number.h include/rgxg/types.h

bin_PROGRAMS = rgxg
rgxg_SOURCES = src/main.c src/rgxg.h src/range.h src/range.c
rgxg_CFLAGS = -I$(top_srcdir)/include
rgxg_LDADD = librgxg.la

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = lib/rgxg.pc

man_MANS = man/rgxg.1

EXTRA_DIST = lib/rgxg.pc.in $(man_MANS)
dist_doc_DATA=README

DISTCLEANFILES = lib/rgxg.pc