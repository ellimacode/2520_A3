#include <stdio.h>

int main(int argc, char* argv[]) {
	
	/* name_basics pointer 
	 * receive the value returned by get_name. */
	get_name();
	
	
	if (argv[0]) {
		fprintf(stderr, "Usage: %s directory\n", argv[0]);
		return -1; 
	}
    return 0;
}
