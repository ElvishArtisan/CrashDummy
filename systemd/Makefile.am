## Makefile.am
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
## Use automake to process this into a Makefile.in

install-exec-local:	
	mkdir -p $(DESTDIR)/lib/systemd/system
	cp crashdummy.service $(DESTDIR)/lib/systemd/system/crashdummy.service
	./daemon-reload.sh

uninstall-local:	
	rm -f $(DESTDIR)/lib/systemd/system/crashdummy.service
	./daemon-reload.sh

EXTRA_DIST = daemon-reload.sh\
             crashdummy.service.in

CLEANFILES = *~

DISTCLEANFILES = Makefile.in\
                 *.service

MAINTAINERCLEANFILES = *~
