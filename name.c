/* NAME: Camille Cua
 * ID: 1046663
 * EMAIL: ccua@uoguelph.ca */

#define _POSTIX_C_SOURCE 200809L
#include <stdio.h>
#include "name.h"
#include "common.h"

struct name_basics *get_name(char *argv) {
	FILE *fp;
	char *path;
	int i=0;
	char buffer[1024];
	char oneCol[1024];
	
	/* allocate an array of struct name_basics */
	struct name_basics *array;
	
	int lines = 0;
	
	path = malloc(strlen(argv) + strlen("/name.basics.tsv") + 1);
	
	strcpy(path, argv);
	strcat(path, "/name.basics.tsv\0");
	
	fp = fopen(path, "r");
	
	if (fp != NULL)
	{
	    while (fgets(buffer, sizeof(buffer), fp))
		{
			get_column(buffer, oneCol, 4);
			
			if (strstr(oneCol, "actor") || strstr(oneCol, "actress"))
			{
				get_column(buffer, oneCol, 0);
				array[i].nconst = strdup(oneCol);
				get_column(buffer, oneCol, 1);
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


