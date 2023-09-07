#include "main.h"

/**
 * echo - printf function
 * Return: void
 */

void echo(const char *msgPrompt) {
    write(STDOUT_FILENO, msgPrompt, strlen(message));
    
}
