#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct title_principals {
	char *tconst;
	char *nconst;
	char *characters;
};


struct title_principals *get_principals(char *argv);


