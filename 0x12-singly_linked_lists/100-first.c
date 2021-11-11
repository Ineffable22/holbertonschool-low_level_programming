#include <unistd.h>
void first(void) __attribute__ ((constructor));
/**
 * first - Prints a sentence before the main
 * function is executed
 */
void first(void)
{
	int i;
	char *c = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";

	for(i = 0; *(c + i); i++)
        {
		write(1, &(*(c + i)), 1);
        }
}
