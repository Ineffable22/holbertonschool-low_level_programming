#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int y = 0;

        for (;*haystack != 0; haystack++)
        {
		if (*haystack == *(needle + y))
		{
			for (y = 0; needle[y] != 0; y++)
			{
				if (*haystack == *(needle + y))
				{
					return (haystack);
				}
			}
		}
        }
        return (0);
}
