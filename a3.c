/* NAME: Camille Cua
 * ID: 1046663
 * EMAIL: ccua@uoguelph.ca */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	
	struct name_basics *ptr;
	if (argv[0]) {
		fprintf(stderr, "Usage: %s directory\n", argv[0]);
		return -1; 
	}
	
	ptr = get_name(argv);
	
    return 0;
}
