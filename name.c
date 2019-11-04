#include <stdio.h>
#include "name.h"
#include "common.h"

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
		
		/* to retrieve column. */
	    get_column();
	    
	}
	
	else
	{
		printf("The file doesn't exist\n");
	}
	
	free(string);
	
	

    return NULL;
}

