#include <stdio.h>
#include "name.h"
#include "common.h"

char *get_name(char *argv[]) {
	
	FILE *fp;
	char *string;
	char buffer[256];
	
	int lines = 0;
	int tab = 0;
	
	
	char *a1 = "actor";
	char *a2 = "actress";
	
	 
	string = malloc(sizeof(strlen(string) + strlen("name.basics.tsv")) + 1);
	
	strcpy(string, "name.basics.tsv");
	
	fp = fopen(string, "r");
	
	if (fp != NULL)
	{
		while (fgets(buffer, sizeof(buffer), fp) != NULL)
		{
			strtok(buffer, "\t");
			strtok(NULL, "\t");
			strtok(NULL, "\t");
			strtok(NULL, "\t");
			if (strtok(NULL, "\t") != NULL)
			{
				tab++;
				if (tab == 4 || tab == 5)
				{
					if (strstr(buffer, a1) || strstr(buffer, a2))
					{
						lines++;
					}
				}
			}
			
		}
		
		fseek(fp, 0, SEEK_SET);
		
	  }
			
	fclose(fp);
	
	printf("%d\n", lines);

	
    free(string);
	
    return NULL;
}

