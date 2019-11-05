#include <stdio.h>
#include "name.h"
#include "common.h"

/* NAME: Camille Cua
 * ID: 1046663
 * EMAIL: ccua@uoguelph.ca */

char *get_name(FILE *fp) {
	char *ptr;
	char buffer[256];
	
	/* allocate an array of struct name_basics */
	struct name_basics *array;
	struct name_basics result;
	
	/* temorary string, reads column */
	char *temp;
	
	int lines = 0;
	
	ptr = malloc(sizeof(ptr) + 1);
	
	strcpy(ptr, "name.basics.tsv");
	
	fp = fopen(ptr, "r");
	
	if (fp != NULL)
	{
	    while (fgets(buffer, sizeof(buffer), fp))
		{
			temp = strtok(buffer, "\t");
			result.nconst = temp;
			
			temp = strtok(NULL, "\t");
			result.primaryName = temp;
			
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
	
	/* beginning of the file */
	fseek(fp, 0, SEEK_SET);
	
	/* malloc for size of name_basics array */
	array = malloc(sizeof(struct name_basics) * lines);
	
    free(ptr);
    
    printf("Lines: %d\n", lines);
	
    return array;
}


