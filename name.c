#include <stdio.h>
#include "name.h"
#include "common.h"

/* NAME: Camille Cua
 * ID: 1046663
 * EMAIL: ccua@uoguelph.ca */

char *get_name(char *argv[]) {
	
	FILE *fp;
	char *ptr;
	char buffer[256];
	
	/* allocate an array of struct name_basics */
	struct name_basics *names;
	
	/* temorary string, reads column */
	char *temp;
	
	int lines = 0;
	
	ptr = malloc(sizeof(strlen(ptr) + strlen("name.basics.tsv")) + 1);
	
	strcpy(ptr, "name.basics.tsv");
	
	fp = fopen(ptr, "r");
	
	if (fp != NULL)
	{
	    while (fgets(buffer, sizeof(buffer), fp))
		{
			temp = strtok(buffer, "\t");
			
			temp = strtok(NULL, "\t");
			
			temp = strtok(NULL, "\t");
			
			temp = strtok(NULL, "\t");
			
			temp = strtok(NULL, "\t");
			
		    if ((strcmp(temp, "actor") == 0)|| (strcmp(temp, "actress") == 0))
			{
				lines++;					
			}
	    }
    }
			
	fclose(fp);
	
	fseek(fp, 0, SEEK_SET);
	
	names = malloc(sizeof(name_basics) * lines);
	
    free(ptr);
    
    printf("%d\n", lines);
	
    return names;
}

