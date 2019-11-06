/* NAME: Camille Cua
 * ID: 1046663
 * EMAIL: ccua@uoguelph.ca */

#ifndef BINARY_H
#define BINARY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct name_all {
	struct name_basics *array;
	int nElements;
	struct tree *n;
	struct tree *pN;
};

struct title_all {
	struct title_basics *array1;
	int nElements;
	struct tree *t;
	struct tree *pT;
};

struct principals_all {
	struct principals_all *array2;
	int nElements;
	struct tree *n;
	struct tree *t;
	struct tree *c;
};


#endif
