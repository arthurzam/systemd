/* SPDX-License-Identifier: LGPL-2.1-or-later */
#pragma once

#include "journald-server.h"

int server_open_varlink(Server *s, const char *socket, int fd);
