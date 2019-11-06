/* NAME: Camille Cua
 * ID: 1046663
 * EMAIL: ccua@uoguelph.ca */

#include <stdio.h>
#include "name.h"
#include "common.h"

struct name_basics *get_name(char *argv) {
	FILE *fp;
	char *path;
	char buffer[1024];
	char oneCol[1024];
	
	/* an array of struct name_basics */
	struct name_basics *array;

	int lines = 0;
	int i = 0;
	
	char *a1 = "actor";
	char *a2 = "actress";
	char *temp;
	
	path = malloc(sizeof(char) * (strlen(argv) + strlen("/name.basics.tsv") + 1));
	strcpy(path, argv);
	strcat(path, "/name.basics.tsv");
	
	fp = fopen(path, "r");
	
	if (fp != NULL)
	{
	    while (fgets(buffer, sizeof(buffer), fp))
		{
			temp = strtok(buffer, "\t");
			
			temp = strtok(NULL, "\t");
			
			temp = strtok(NULL, "\t");
			
			temp = strtok(NULL, "\t");
			
			temp = strtok(NULL, "\t");
			
			/* assign return values from strdup to pointers in
			 * name_basics structure. */
			if (strstr(temp, a1) || strstr(temp, a2))
			{
				array[i].nconst = strdup(oneCol);
				array[i].primaryName = strdup(oneCol);
				lines++;
				i++;
			}
	    }
    }
			
	fclose(fp);
	
	/* malloc for size of name_basics array */
	array = malloc(sizeof(struct name_basics) * lines);
	
	fseek(fp, 0, SEEK_SET);
	
    free(path);
    
    printf("Lines: %d\n", lines);
	
    return array;
}


