#include "main.h"

/**
 * input_err - handles the error for command not found
 * @excecutable: the name of the executable (hsh)
 * @incrementor: number of times the loop runs
 * @input: the command entered by the user
 *
 * Return: nothing
 */

void input_err(char *executable, int incrementor, char *input)
{
	print_a_str(executable);
	print_a_str(": ");
	print_a_char(incrementor);
	print_a_str(": ");
	print_a_str(input);
	print_a_str(":not found\n");
}
