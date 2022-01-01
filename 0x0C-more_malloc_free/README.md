# 0x0C. C - More malloc, free

### Requirements:
## C
- Allowed editors: `vi`, `vim`, `emacs`.
All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project.
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl).
- You are not allowed to use global variables.
- No more than 5 functions per file.
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden.
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c).
 -You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account.
 -In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`.
- Don’t forget to push your header file.

## Files
### main.h
Stores the prototypes of all files.

### 0-malloc_checked.c
Writes a function that allocates memory using `malloc`.
- Prototype: `void *malloc_checked(unsigned int b);`
- Returns a pointer to the allocated memory.
- if `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of `98`.

### 1-string_nconcat.c
Writes a function that concatenates two strings.
- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`.
- The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated.
- If the function fails, it should return `NULL`.
- If `n` is greater or equal to the length of `s2` then use the entire string `s2`.
- If `NULL` is passed, treat it as an empty string.

### 2-calloc.c
Write a function that allocates memory for an array, using `malloc`.
- Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
- The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
- The memory is set to zero.
- If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`.
- If `malloc` fails, then `_calloc` returns `NULL`.

### 3-array_range.c
Write a function that creates an array of integers.
- Prototype: `int *array_range(int min, int max);`.
- The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`.
- Return: the pointer to the newly created array.
- If `min` > `max`, return `NULL`.
- If `malloc` fails, return `NULL`.

### 100-realloc.c
Writes a function that reallocates a memory block using `malloc` and `free`.
- Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`.
- where `ptr` is a pointer to the memory previously allocated with a call to `malloc: malloc(old_size)`.
- `old_size` is the size, in bytes, of the allocated space for `ptr`.
- and `new_size` is the new size, in bytes of the new memory block.
- The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes.
- If `new_size` > `old_size`, the “added” memory should not be initialized.
- If `new_size` == `old_size` do not do anything and return `ptr`.
- If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`.
- If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`.
- free `ptr` at the end.

### 101-mul.c
Write a program that multiplies two positive numbers.
- Usage: `mul num1 num2`.
- `num1` and `num2` will be passed in base 10.
- Print the result, followed by a new line.
- If the number of arguments is incorrect, print `Error`, followed by a new line, and exit with a status of `98`.
- `num1` and `num2` should only be composed of digits. If not, print `Error`, followed by a new line, and exit with a status of `98`.
- You are allowed to use more than 5 functions in your file.
- You can use `bc` (`man bc`) to check your results.

