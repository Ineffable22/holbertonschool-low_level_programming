#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>


/*---------- mandatory ----------*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/*---------- advanced ----------*/
int jump_search(int *array, size_t size, int value);

#endif