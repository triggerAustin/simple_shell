#include "shell.h"

/**
 *
 */
int handle_input(char** str)
{
	int status, pid;
	char path[256] = "/bin/";

	pid = fork();

	if (pid == 0)
	{
		execve(path, str);
		perror("Error:");
	}
	else if (pid > 0)
		wait(&status);
	else
		printf("fork failed");

	printf("path: %s", path);
	printf("command: %s", str[0]);
	return (0);
}
