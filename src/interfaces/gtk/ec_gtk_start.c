/*
    ettercap -- GTK+ GUI

    Copyright (C) ALoR & NaGA

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

    $Id: ec_gtk_start.c,v 1.1 2004/02/27 03:34:33 daten Exp $
*/

#include <ec.h>
#include <ec_gtk.h>

/* proto */

void gui_start_sniffing(void);
void gui_stop_sniffing(void);

/*******************************************/


void gui_start_sniffing(void)
{
   DEBUG_MSG("gtk_start_sniffing");
   
   /* start the sniffing method */
   EXECUTE(GBL_SNIFF->start);
}

void gui_stop_sniffing(void)
{
   DEBUG_MSG("gtk_stop_sniffing");
   
   /* terminate the sniffing engine */
   EXECUTE(GBL_SNIFF->cleanup);
}


/* EOF */

// vim:ts=3:expandtab

