#include "main.h"

/**
 * execute_console_display - Execute the display prompt
 * Return: void
 */ 

void execute_console_display(const char *cmd) {

    pid_t childPID = fork();

    if (childPID == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (childPID == 0) {
        execve(cmd [0], cmd, NULL);
        perror("execlp");
        exit(EXIT_FAILURE);

    }
    else {
        wait(NULL);
    }
}
