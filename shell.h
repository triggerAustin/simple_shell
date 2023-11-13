#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define BUFF_SIZE 1024

void show_prompt();
int handle_input(char** str);
char** tokenizestr(char* input, char** args);
void executable(char* str);
#endif
