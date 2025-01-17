/* Copyright (c) 2008, 2009
 *      Juergen Weigert (jnweiger@immd4.informatik.uni-erlangen.de)
 *      Michael Schroeder (mlschroe@immd4.informatik.uni-erlangen.de)
 *      Micah Cowan (micah@cowan.name)
 *      Sadrul Habib Chowdhury (sadrul@users.sourceforge.net)
 * Copyright (c) 1993-2002, 2003, 2005, 2006, 2007
 *      Juergen Weigert (jnweiger@immd4.informatik.uni-erlangen.de)
 *      Michael Schroeder (mlschroe@immd4.informatik.uni-erlangen.de)
 * Copyright (c) 1987 Oliver Laumann
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program (see the file COPYING); if not, see
 * https://www.gnu.org/licenses/, or contact Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02111-1301  USA
 *
 ****************************************************************
 */

#include "config.h"

#include "comm.h"

/* Must be in alpha order ! */

struct comm comms[RC_LAST + 1] =
{
  { "acladd",		ARGS_1234,			{NULL} },
  { "aclchg",		ARGS_23,			{NULL} },
  { "acldel",		ARGS_1,				{NULL} },
  { "aclgrp",		ARGS_12,			{NULL} },
  { "aclumask",		ARGS_1|ARGS_ORMORE,		{NULL} },
  { "activity",		ARGS_1,				{NULL} },
  { "addacl",		ARGS_1234,			{NULL} },
  { "allpartial",	NEED_DISPLAY|ARGS_1,		{NULL} },
  { "altscreen",	ARGS_01,			{NULL} },
  { "at",		CAN_QUERY|ARGS_2|ARGS_ORMORE,		{NULL} },
  { "auth",		ARGS_1,                         {NULL} },
  { "autodetach",	ARGS_1,				{NULL} },
  { "autonuke",		NEED_DISPLAY|ARGS_1,		{NULL} },
  { "backtick",		ARGS_1|ARGS_ORMORE,		{NULL} },
  { "bce",		NEED_FORE|ARGS_01,		{NULL} },
  { "bell",		ARGS_01,			{NULL} },
  { "bell_msg",		ARGS_01,			{NULL} },
  { "bind",		ARGS_1|ARGS_ORMORE,		{NULL} },
  { "bindkey",		ARGS_0|ARGS_ORMORE,		{NULL} },
  { "blanker",		NEED_DISPLAY|ARGS_0,		{NULL} },
  { "blankerprg",	ARGS_0|ARGS_ORMORE,		{NULL} },
  { "break",		NEED_FORE|ARGS_01,		{NULL} },
  { "breaktype",	NEED_FORE|ARGS_01,		{NULL} },
  { "bufferfile",	ARGS_01,			{NULL} },
  { "bumpleft",		NEED_FORE|ARGS_0,		{NULL} },
  { "bumpright",	NEED_FORE|ARGS_0,		{NULL} },
  { "c1",		NEED_FORE|ARGS_01,		{NULL} },
  { "caption",		ARGS_123,			{NULL} },
  { "chacl",		ARGS_23,			{NULL} },
  { "charset",          NEED_FORE|ARGS_1,		{NULL} },
  { "chdir",		ARGS_01,			{NULL} },
  { "cjkwidth",		ARGS_01,			{NULL} },
  { "clear",		NEED_FORE|ARGS_0,		{NULL} },
  { "collapse",		ARGS_0,				{NULL} },
  { "colon",		NEED_LAYER|ARGS_01,		{NULL} },
  { "command",		NEED_DISPLAY|ARGS_02,		{NULL} },
  { "compacthist",	ARGS_01,			{NULL} },
  { "console",		NEED_FORE|ARGS_01,		{NULL} },
  { "copy",		NEED_FORE|NEED_DISPLAY|ARGS_0,	{NULL} },
  { "crlf",		ARGS_01,			{NULL} },
  { "defautonuke",	ARGS_1,				{NULL} },
  { "defbce",		ARGS_1,				{NULL} },
  { "defbreaktype",	ARGS_01,			{NULL} },
  { "defc1",		ARGS_1,				{NULL} },
  { "defcharset",       ARGS_01,			{NULL} },
  { "defdynamictitle",	ARGS_1,				{NULL} },
  { "defencoding",	ARGS_1,				{NULL} },
  { "defescape",	ARGS_1,				{NULL} },
  { "defflow",		ARGS_12,			{NULL} },
  { "defgr",		ARGS_1,				{NULL} },
  { "defhstatus",	ARGS_01,			{NULL} },
  { "defkanji",		ARGS_1,				{NULL} },
  { "deflog",		ARGS_1,				{NULL} },
#if defined(ENABLE_UTMP)
  { "deflogin",		ARGS_1,				{NULL} },
#endif
  { "defmode",		ARGS_1,				{NULL} },
  { "defmonitor",	ARGS_1,				{NULL} },
  { "defmousetrack",	ARGS_1,				{NULL} },
  { "defnonblock",	ARGS_1,				{NULL} },
  { "defobuflimit",	ARGS_1,				{NULL} },
  { "defscrollback",	ARGS_1,				{NULL} },
  { "defshell",		ARGS_1,				{NULL} },
  { "defsilence",	ARGS_1,				{NULL} },
  { "defslowpaste",	ARGS_1,				{NULL} },
  { "defutf8",		ARGS_1,				{NULL} },
  { "defwrap",		ARGS_1,				{NULL} },
  { "defwritelock",	ARGS_1,				{NULL} },
  { "detach",		NEED_DISPLAY|ARGS_01,		{NULL} },
  { "digraph",		NEED_LAYER|ARGS_012,		{NULL} },
  { "dinfo",		NEED_DISPLAY|ARGS_0,		{NULL} },
  { "displays",		NEED_LAYER|ARGS_0,		{NULL} },
  { "dumpscreen",	CAN_QUERY|ARGS_012,		{NULL} },
  { "dumptermcap",	NEED_FORE|ARGS_0,		{NULL} },
  { "dynamictitle",	ARGS_1,				{NULL} },
  { "echo",		CAN_QUERY|ARGS_12,		{NULL} },
  { "encoding",		ARGS_12,			{NULL} },
  { "escape",		ARGS_1,				{NULL} },
  { "eval",		ARGS_1|ARGS_ORMORE,		{NULL} },
  { "exec",		ARGS_0|ARGS_ORMORE,		{NULL} },
  { "fit",		NEED_DISPLAY|ARGS_0,		{NULL} },
  { "flow",		NEED_FORE|ARGS_01,		{NULL} },
  { "focus",		NEED_DISPLAY|ARGS_01,		{NULL} },
  { "focusminsize",	ARGS_02,			{NULL} },
  { "gr",		NEED_FORE|ARGS_01,		{NULL} },
  { "group",            CAN_QUERY|NEED_FORE|ARGS_01,	{NULL} },
  { "hardcopy",		NEED_FORE|ARGS_012,		{NULL} },
  { "hardcopy_append",	ARGS_1,				{NULL} },
  { "hardcopydir",	ARGS_01,			{NULL} },
  { "hardstatus",	ARGS_012,			{NULL} },
  { "height",		ARGS_0123,			{NULL} },
  { "help",		NEED_LAYER|ARGS_02,		{NULL} },
  { "history",		NEED_DISPLAY|NEED_FORE|ARGS_0,	{NULL} },
  { "hstatus",		NEED_FORE|ARGS_1,		{NULL} },
  { "idle",		ARGS_0|ARGS_ORMORE,		{NULL} },
  { "ignorecase",	ARGS_01,			{NULL} },
  { "info",		CAN_QUERY|NEED_LAYER|ARGS_0,	{NULL} },
  { "kanji",		NEED_FORE|ARGS_12,		{NULL} },
  { "kill",		NEED_FORE|ARGS_01,		{NULL} },
  { "lastmsg",		CAN_QUERY|NEED_DISPLAY|ARGS_0,	{NULL} },
  { "layout",           CAN_QUERY|ARGS_1|ARGS_ORMORE,	{NULL} },
  { "license",		NEED_LAYER|ARGS_0,		{NULL} },
  { "lockscreen",	NEED_DISPLAY|ARGS_0,		{NULL} },
  { "log",		NEED_FORE|ARGS_01,		{NULL} },
  { "logfile",		ARGS_012,			{NULL} },
#if defined(ENABLE_UTMP)
  { "login",		NEED_FORE|ARGS_01,		{NULL} },
#endif
  { "logtstamp",	ARGS_012,			{NULL} },
  { "mapdefault",	NEED_DISPLAY|ARGS_0,		{NULL} },
  { "mapnotnext",	NEED_DISPLAY|ARGS_0,		{NULL} },
  { "maptimeout",	ARGS_01,			{NULL} },
  { "markkeys",		ARGS_1,				{NULL} },
  { "maxlay",		CAN_QUERY|ARGS_01,		{NULL} },
  { "meta",		NEED_LAYER|ARGS_0,		{NULL} },
  { "monitor",		NEED_FORE|ARGS_01,		{NULL} },
  { "mousetrack",	NEED_DISPLAY | ARGS_01,		{NULL} },
  { "msgminwait",	ARGS_1,				{NULL} },
  { "msgwait",		ARGS_1,				{NULL} },
  { "multiinput",	ARGS_01,			{NULL} },
  { "multiuser",	ARGS_1,				{NULL} },
  { "next",		ARGS_0,				{NULL} },
  { "nonblock",		NEED_DISPLAY|ARGS_01,		{NULL} },
  { "number",		CAN_QUERY|NEED_FORE|ARGS_01,	{NULL} },
  { "obuflimit",	NEED_DISPLAY|ARGS_01,		{NULL} },
  { "only",		NEED_DISPLAY|ARGS_0,		{NULL} },
  { "other",		ARGS_0,				{NULL} },
  { "parent",		ARGS_0,				{NULL} },
  { "partial",		NEED_FORE|ARGS_01,		{NULL} },
  { "paste",		NEED_LAYER|ARGS_012,		{NULL} },
  { "pastefont",	ARGS_01,			{NULL} },
  { "pow_break",	NEED_FORE|ARGS_01,		{NULL} },
  { "pow_detach",	NEED_DISPLAY|ARGS_01,		{NULL} },
  { "pow_detach_msg",	ARGS_01,			{NULL} },
  { "prev",		ARGS_0,				{NULL} },
  { "printcmd",		ARGS_01,			{NULL} },
  { "process",		NEED_DISPLAY|ARGS_01,		{NULL} },
  { "quit",		ARGS_01,			{NULL} },
  { "readbuf",		ARGS_0123,			{NULL} },
  { "readreg",          ARGS_0|ARGS_ORMORE,		{NULL} },
  { "redisplay",	NEED_DISPLAY|ARGS_0,		{NULL} },
  { "register",		ARGS_24,			{NULL} },
  { "remove",		NEED_DISPLAY|ARGS_0,		{NULL} },
  { "removebuf",	ARGS_0,				{NULL} },
  { "rendition",	ARGS_2,				{NULL} },
  { "reset",		NEED_FORE|ARGS_0,		{NULL} },
  { "resize",		NEED_DISPLAY|ARGS_0|ARGS_ORMORE,{NULL} },
  { "screen",		CAN_QUERY|ARGS_0|ARGS_ORMORE,	{NULL} },
  { "scrollback",	NEED_FORE|ARGS_01,		{NULL} },
  { "select",		CAN_QUERY|ARGS_01,		{NULL} },
  { "sessionname",	CAN_QUERY|ARGS_01,		{NULL} },
  { "setenv",		ARGS_012,			{NULL} },
  { "setsid",		ARGS_1,				{NULL} },
  { "shell",		ARGS_1,				{NULL} },
  { "shelltitle",	ARGS_1,				{NULL} },
  { "silence",		NEED_FORE|ARGS_01,		{NULL} },
  { "silencewait",	ARGS_1,				{NULL} },
  { "sleep",		ARGS_1,				{NULL} },
  { "slowpaste",	NEED_FORE|ARGS_01,		{NULL} },
  { "sorendition",      ARGS_012,			{NULL} },
  { "sort",		ARGS_0,				{NULL} },
  { "source",		ARGS_1,				{NULL} },
  { "split",		NEED_DISPLAY|ARGS_01,		{NULL} },
  { "startup_message",	ARGS_1,				{NULL} },
  { "status",		ARGS_12,			{NULL} },
  { "stuff",		NEED_LAYER|ARGS_012,		{NULL} },
  { "su",		NEED_DISPLAY|ARGS_012,		{NULL} },
  { "suspend",		NEED_DISPLAY|ARGS_0,		{NULL} },
  { "term",		ARGS_1,				{NULL} },
  { "termcap",		ARGS_23,			{NULL} },
  { "termcapinfo",	ARGS_23,			{NULL} },
  { "terminfo",		ARGS_23,			{NULL} },
  { "title",		CAN_QUERY|NEED_FORE|ARGS_01,	{NULL} },
  { "truecolor",	ARGS_1,				{NULL} },
  { "tty",		CAN_QUERY|ARGS_0,		{NULL} },
  { "umask",		ARGS_1|ARGS_ORMORE,		{NULL} },
  { "unbindall",	ARGS_0,				{NULL} },
  { "unsetenv",		ARGS_1,				{NULL} },
  { "utf8",		NEED_FORE|ARGS_012,		{NULL} },
  { "vbell",		ARGS_01,			{NULL} },
  { "vbell_msg",	ARGS_01,			{NULL} },
  { "vbellwait",	ARGS_1,				{NULL} },
  { "verbose",		ARGS_01,			{NULL} },
  { "version",		ARGS_0,				{NULL} },
  { "wall",		NEED_DISPLAY|ARGS_1,		{NULL} },
  { "width",		ARGS_0123,			{NULL} },
  { "windowlist",	ARGS_012,			{NULL} },
  { "windows",		CAN_QUERY|ARGS_01,		{NULL} },
  { "wrap",		NEED_FORE|ARGS_01,		{NULL} },
  { "writebuf",		ARGS_0123,			{NULL} },
  { "writelock",	NEED_FORE|ARGS_01,		{NULL} },
  { "xoff",		NEED_LAYER|ARGS_0,		{NULL} },
  { "xon",		NEED_LAYER|ARGS_0,		{NULL} },
  { "zmodem",		ARGS_012,			{NULL} },
  { "zombie",		ARGS_012,			{NULL} },
  { "zombie_timeout",	ARGS_1,				{NULL} }
};
