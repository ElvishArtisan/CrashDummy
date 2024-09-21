## Makefile.am
##
## Top level Makefile.am
##
## Use automake to process this into a Makefile.in
##
##   (C) Copyright 2024 Fred Gleason <fredg@paravelsystems.com>
##
##   This program is free software; you can redistribute it and/or modify
##   it under the terms of the GNU General Public License version 2 as
##   published by the Free Software Foundation.
##
##   This program is distributed in the hope that it will be useful,
##   but WITHOUT ANY WARRANTY; without even the implied warranty of
##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
##   GNU General Public License for more details.
##
##   You should have received a copy of the GNU General Public
##   License along with this program; if not, write to the Free Software
##   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
##

SUBDIRS = helpers\
          debian\
          src\
          systemd

deb:	dist
	./build_debs.sh

rpm:	dist
	cp crashdummy-$(VERSION).tar.gz $(HOME)/rpmbuild/SOURCES/
	$(RPMBUILD) -ba --target $(ARCH)-$(VENDOR)-linux crashdummy.spec
	mv $(HOME)/rpmbuild/RPMS/$(ARCH)/crashdummy-*.rpm $(top_srcdir)/
	mv $(HOME)/rpmbuild/SRPMS/crashdummy-*.src.rpm $(top_srcdir)/
	rm $(HOME)/rpmbuild/SOURCES/crashdummy-$(VERSION).tar.gz
	rm -rf $(HOME)/rpmbuild/BUILD/crashdummy-$(VERSION)

EXTRA_DIST = autogen.sh\
             build_debs.sh.in\
             get_distro.pl\
             get_target.sh\
             PACKAGE_VERSION

CLEANFILES = *~\
             *.buildinfo\
             *.changes\
             *.ddeb\
             *.deb\
             *.dsc\
             *.mo\
             *.rpm\
             *.tar.gz\
             *.tar.xz\
             *.tgz\
             *.zip

DISTCLEANFILES = *.service\
                 *.spec\
                 build_debs.sh\
                 compile\
                 config.guess\
                 config.sub

MAINTAINERCLEANFILES = *~\
                       *.spec\
                       *.tar.gz\
                       aclocal.m4\
                       compile\
                       config.guess\
                       config.status\
                       config.sub\
                       configure\
                       depcomp\
                       install-sh\
                       libtool\
                       ltmain.sh\
                       Makefile.in\
                       missing\
                       mkinstalldirs
