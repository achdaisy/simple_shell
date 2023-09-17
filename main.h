#ifndef _SHELL_D_A
#define _SHELL_D_A

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>

/*#define ARGS 8*/
#define BUFFSIZE 10000 /*making it large to avoid reallocs*/

extern char **environ;

void _environ(void);
char *return_path(void);
char *path_separator(char *path, char *arg);
void console_display(void);
/*void echo(const char *msg);*/
/*void execute_console_display(const char *myConsole)*/
void accept_input_command(char *cmd, size_t size_input);
void exec(char *filepath, char **arg, char **penviron);
void free_arr(char **strings);
char **parser(char *buff);
char *npath(void);
int print_a_char(char a);
int print_a_str(char *string);
void input_err(char *executable, int incrementor, char *input);
void built_in(char **cmd_args, char *input);
void ctrl_d(int read, char *input);

#endif
