#include "main.h"

/**
 * main - Entry point
 * Return: 0 always
 */

void console_display(void) {
    echo("da_am_shell$ ")
}

int main(int argc, char **argv) {
    char cmd[221];

    while(true) {
        console_display();
        accept_input_command(cmd);
        execute_console_display(cmd)

    }
}
