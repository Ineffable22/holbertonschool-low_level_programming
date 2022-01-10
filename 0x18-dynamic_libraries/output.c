#include <unistd.h>

int printf(const char *format, ...)
{
	return (0);
}

int puts (const char *s)
{
	return (write(1, "9 8 10 24 75 - 9\nCongratulations, you win the Jackpot!\n", 57));
}
