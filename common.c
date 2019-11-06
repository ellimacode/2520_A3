/* NAME: Camille Cua
 * ID: 1046663
 * EMAIL: ccua@uoguelph.ca */
 
#include <stdio.h>
#include "common.h" 

void get_column(char *line, char *cols, int colNum)
{
	int i;
	
	/* start and end index of entire life. */
	int first = 0;
	int last = 0;
	
	int tab = 0;
	
	for (i = 0; i < strlen(line); i++)
	{
		if (line[i] == '\t' || line[i] == '\n')
		{
			tab++;
			if (tab == colNum)
			{
				first = i + 1;
			}
			else if (tab == colNum + 1)
			{
				last = i;
				break;
			}
		}
	}
	
	cols = malloc(sizeof(char)*strlen(line)+1);
	
	strcpy(cols, line);
	
	cols[last - first] = '\0';
	
}


