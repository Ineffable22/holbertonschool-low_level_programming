#include "main.h"

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;
	
	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return dest;
}
