/* NAME: Camille Cua
 * ID: 1046663
 * EMAIL: ccua@uoguelph.ca */

#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct name_basics {
	char *nconst;
	char *primaryName;
};

struct name_basics *get_name(char *argv);


