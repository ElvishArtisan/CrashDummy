/* crashdummy.cpp
 *
 * (C) Copyright 2024 Fred Gleason <fredg@paravelsystems.com>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License version 2 as
 *   published by the Free Software Foundation.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public
 *   License along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>
#include <unistd.h>
#include <sys/types.h>

#include "crashdummy.h"

int main(int argc,char *argv[])
{
  openlog("crashdummy",0,LOG_DAEMON);

  syslog(LOG_WARNING,"generating SIGSEGV in 10 seconds.");

  sleep(10);
  syslog(LOG_WARNING,"generating SIGSEGV NOW.");
  kill(getpid(),SIGSEGV);

  exit(0);
}
