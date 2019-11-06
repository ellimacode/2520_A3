/* NAME: Camille Cua
 * ID: 1046663
 * EMAIL: ccua@uoguelph.ca */

#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct title_basics {
	char *tconst;
	char *primaryTitle;
};

struct title_basics *get_title(char *argv);
