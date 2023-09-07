#include "main.h"

/**
 * accept_input_command - User input
 * Return: void
 */

void accept_input_command(char *cmd, size_t size_input) {
    if (getline(&cmd, &size_input, stdin) != -1) {
        if (feof(stdin)) {
            echo("\n");
            exit(EXIT_SUCCESS);
        }
        else {
            echo("%s: No such file or directory\n", argv [0]);
            exit(EXIT_FAILURE);
        }
    }

    cmd[strcspn(cmd, "\n")] = '\0';

}
