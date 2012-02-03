/****************************************************************
 * $ID: ctcp.h         Sat, 26 Jul 2008 19:59:08 +0800  mhfan $ *
 *                                                              *
 * Description:                                                 *
 *                                                              *
 * Maintainer:  ������(Meihui Fan)  <mhfan@ustc.edu>            *
 *                                                              *
 * Copyright (C)  2008  M.H.Fan                                 *
 *   All rights reserved.                                       *
 *                                                              *
 * This file is free software;                                  *
 *   you are free to modify and/or redistribute it   	        *
 *   under the terms of the GNU General Public Licence (GPL).   *
 ****************************************************************/
#ifndef CTCP_H
#define CTCP_H

struct ctcp_cmsg {
#define CTCP_CMSG_STX	0xaa
#define CTCP_CMSG_SDATA	20
#define CTCP_CMSG_CDATA 80
    unsigned char stx, ver, tar[16], cmd, xor, buf[CTCP_CMSG_CDATA];
};

enum ctcp_cmsg_code {
    CTCP_CMSG_NULL,
};

#endif//CTCP_H
// vim:sts=4:ts=8:
