#include <string.h>

int rand()
{
	static int num = -1;

	num++;
	if (num == 0)
		return 9;
	if (num == 1)
		return 8;
	if (num == 2)
		return 10;
	if (num == 3)
		return 24;
	if (num == 4)
		return 75;
	if (num == 5)
		return 9;
	return (num * num % 30000);
}
