#include <stdio.h>
#include "name.h"

char *get_name(char *argv[]) {
	FILE *fp;
	
	char *string;
	
	char buffer[256];
	 
	string = malloc(sizeof(strlen(string) + strlen("name.basics.tsv")) + 1);
	
	strcpy(string, "name.basics.tsv");
	
	fp = fopen(string, "r");
	
	if (fp != NULL)
	{
		while (fgets(buffer, sizeof(buffer), fp))
		{
			fprintf(stdout, "%s", buffer);
		}
		fclose(fp);
	}
	
	free(string);

    return NULL;
}
