/********************************************************************\
 * MainWindow.h -- the main window, and associated helper functions * 
 *                 and callback functions for xacc (X-Accountant    *
 * Copyright (C) 1997 Robin D. Clark                                *
 *                                                                  *
 * This program is free software; you can redistribute it and/or    *
 * modify it under the terms of the GNU General Public License as   *
 * published by the Free Software Foundation; either version 2 of   *
 * the License, or (at your option) any later version.              *
 *                                                                  *
 * This program is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of   *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    *
 * GNU General Public License for more details.                     *
 *                                                                  *
 * You should have received a copy of the GNU General Public License*
 * along with this program; if not, write to the Free Software      *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.        *
 *                                                                  *
 *   Author: Rob Clark                                              *
 * Internet: rclark@cs.hmc.edu                                      *
 *  Address: 609 8th Street                                         *
 *           Huntington Beach, CA 92648-4632                        *
\********************************************************************/

#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include "config.h"
#include "ui-callbacks.h"
#include "gnc-common.h"
#include "Session.h"

/** GLOBALS *********************************************************/
typedef enum {
  HMB_ABOUT,
  HMB_ACC,
  HMB_REGWIN,
  HMB_RECNWIN,
  HMB_ADJBWIN,
  HMB_MAIN,
  HMB_LIC,
} gncHelpTypes;

/** PROTOTYPES ******************************************************/

void     mainWindow();
void     gnc_show_help(const gncHelpTypes t);
Session *gnc_main_window_get_session(gncUIWidget w);

#endif
