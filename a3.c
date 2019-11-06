/* NAME: Camille Cua
 * ID: 1046663
 * EMAIL: ccua@uoguelph.ca */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "name.h"
#include "title.h"
#include "principals.h"

int main(int argc, char *argv[])
{
	struct name_basics *ptr;
	struct title_basics *ptr1;
	
	if (argv[0]) {
		fprintf(stderr, "Usage: %s directory\n", argv[0]);
		return -1; 
	}
	
	ptr = get_name(argv[1]);
	ptr1 = get_title(argv[1]);
	
	
    return 0;
}
