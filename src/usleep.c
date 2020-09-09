/*
 *	Copyright (C) 2020, Martial Bornet
 *
 *	This program is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *	---------------------------------------------------
 *
 *	@(#)	[MB] aj_usleep.c	Version 1.2 du 20/09/09 - 
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	useconds_t			_n;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s n_micro_seconds\n", argv[0]);
		exit(1);
	}

	_n					= atol(argv[1]);
	(void) usleep(_n);

	return 0;
}
