#include "shell.h"

/**
 *
 */
int main()
{
	char user_input[BUFF_SIZE];
	char* args[256];

	while (true)
	{
		show_prompt();
		fflush(stdout);

		if (fgets(user_input, sizeof(user_input), stdin) == NULL)
		{
			printf("\n");exit(98);
		}

		handle_input(tokenizestr(user_input, args));
	}

	return (0);
}
