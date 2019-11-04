#include <stdio.h>
#include "common.h"

/* helper function
 * to add a fiter for actors and actresses. */
char *get_column(char *line, char *cols, int col) {
	int tab = 0;
	int i;
	
	/* loop through the input string. */
	while (line != NULL)
	{
		i++;
		if (line[i] == '\t') {
			tab++;
			/* look for 5th column, between the 4th and 5th tab. */
			if (tab == 5) {
				break;
			}
		}
	}
	
	strncpy(cols,line,sizeof(line) +1);
	
	printf("%s", cols);

return cols;
}
