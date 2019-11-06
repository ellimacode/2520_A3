/* NAME: Camille Cua
 * ID: 1046663
 * EMAIL: ccua@uoguelph.ca */

#include <stdio.h>
#include "principals.h"

struct title_principals *get_principals(char *argv)
{
	FILE *fp;
	char buffer[1024];
	char col[1024];
	char *path;
	
	struct title_principals *array2;
	
	int lines = 0;
	int i = 0;
	
	char *temp;
	
	path = malloc(sizeof(char) * (strlen(argv) + strlen("/title.principals.tsv") + 1));
	strcpy(path, argv);
	strcat(path, "/title.principals.tsv");
	
	fp = fopen(path, "r");
	
	if (fp != NULL)
	{
		while (fgets(buffer, sizeof(buffer), fp))
		{
			temp = strtok(buffer, "\t");
			array2[i].tconst = strdup(col);
			
			temp = strtok(NULL, "\t");
			
			temp = strtok(NULL, "\t");
			array2[i].nconst = strdup(col);
			
			temp = strtok(NULL, "\t");
			
			temp = strtok(NULL, "\t");
			
			temp = strtok(NULL, "\t");
			array2[i].characters = strdup(col);
			
			lines++;
			i++;
		}
	}
	
	fclose(fp);
	
	array2 = malloc(sizeof(struct title_principals) * lines);
	
	fseek(fp, 0, SEEK_SET);
	
	free(path);
	
	printf("Lines: %d\n", lines);
	
	return array2;
}




