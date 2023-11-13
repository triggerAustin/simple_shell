#include "shell.h"

/**
 *
 */

char** tokenizestr(char* input, char** args)
{
	int argcount = 0;

        char *token = strtok(input, " ");
	
        while (token != NULL) 
	{
		args[argcount++] = token;
                token = strtok(NULL, " ");
	}
            args[argcount] = NULL;
return (args);
}
