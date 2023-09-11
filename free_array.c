#include "main.h"

/**
 * free_arr - used to free an array of characters
 * @strings: input parameter (array to be freed).
 *
 * Return: void
 */

void free_arr(char **strings)
{
	int i;
	/*char **strings = str_pointer;*/

        if (strings != NULL)
        {
                for (i = 0; strings[i]; i++)
                {
                        free(strings[i]);
                }
                free(strings);
		/**str_pointer = NULL;*/
        }
}
