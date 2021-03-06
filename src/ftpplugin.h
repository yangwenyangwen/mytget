/*  Mytget - A download accelerator for GNU/Linux
 *  Homepage: https://github.com/lytsing/Mytget
 *  Copyright (C) 2005- xiaosuo
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */


#ifndef _FTPPLUGIN_H
#define _FTPPLUGIN_H

#include "plugin.h"
#include "task.h"
#include "ftp.h"

class FtpPlugin : public Plugin {
    public:
        int get_info(Task *task);
        int download(Task &task, Block *block);
        int get_dir_list(Task &task, const char *tempfile);
        int relogin(Ftp *ftp, Task &task);
        int recursive_get_dir_list(Task &task, Ftp *ftp, const char *tempfile,
                const char *absdir, FILE *rfd, FILE *wfd, off_t *woff);
};

#endif // _FTPPLUGIN_H

