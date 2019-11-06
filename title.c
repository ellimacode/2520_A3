/* NAME: Camille Cua
 * ID: 1046663
 * EMAIL: ccua@uoguelph.ca */

#include <stdio.h>
#include "title.h"

struct title_basics *get_title(char *argv)
{
	FILE *fp;
	char buffer[1024];
	char col[1024];
	char *path;
	
	struct title_basics *array1;
	
	int lines = 0;
	int i = 0;
	
	char *m = "movie";
	char *temp;
	
	path = malloc(sizeof(char) *(strlen(argv) + strlen("/title.basics.tsv") + 1));
	strcpy(path, argv);
	strcat(path, "/title.basics.tsv");
	
	fp = fopen(path, "r");
	
	if (fp != NULL)
	{
		while (fgets(buffer, sizeof(buffer), fp))
		{	
			temp = strtok(buffer, "\t");
			
			temp = strtok(NULL, "\t");
			
			temp = strtok(NULL, "\t");
			if (strstr(col, m) || strstr(col, "0"))
			{
				array1[i].tconst = strdup(col);
				array1[i].primaryTitle = strdup(col);
			    lines++;
			    i++;
			}
			
			temp = strtok(NULL, "\t");
			
			temp = strtok(NULL, "\t");
		}
	}
	
	fclose(fp);
	
	array1 = malloc(sizeof(struct title_basics) * lines);
	
	fseek(fp, 0, SEEK_SET);
	
	free(path);
	
	printf("Lines: %d\n", lines);
	
    return array1;	
}
