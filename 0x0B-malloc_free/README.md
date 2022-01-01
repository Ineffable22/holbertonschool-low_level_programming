# 0x0B. C - malloc, free

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

### 0-create_array.c
Writes a function that creates an array of chars, and initializes it with a specific char.
- Prototype: `char *create_array(unsigned int size, char c);`.
- Returns `NULL` if size = `0`.
- Returns a pointer to the array, or `NULL` if it fails.

### 1-strdup.c
Writes a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
-Prototype: `char *_strdup(char *str);`.
- The `_strdup()` function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns `NULL` if str = NULL.
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available.

### 2-str_concat.c
Writes a function that concatenates two strings.
- Prototype: `char *str_concat(char *s1, char *s2);`.
- The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated.
- If `NULL` is passed, treat it as an empty string.
- The function should return `NULL` on failure.

### 3-alloc_grid.c
Write a function that returns a pointer to a 2 dimensional array of integers.
- Prototype: `int **alloc_grid(int width, int height);`.
- Each element of the grid should be initialized to `0`.
- The function should return `NULL` on failure.
- If `width` or `height` is `0` or negative, return `NULL`.

### 4-free_grid.c
Writes a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.
- Prototype: `void free_grid(int **grid, int height);`.

### 100-argstostr.c
Writes a function that concatenates all the arguments of your program, followed by a `\n` in the new string.
- Prototype: `char *argstostr(int ac, char **av);`.
- Returns `NULL` if `ac == 0` or `av == NULL`.
- Returns a pointer to a new string, or `NULL` if it fails.

### 101-strtow.c
Writes a function that splits a string into words.
- Prototype: `char **strtow(char *str);`.
- The function returns a pointer to an array of strings (words).
- Each element of this array should contain a single word, null-terminated.
- The last element of the returned array should be `NULL`.
- Words are separated by spaces.
- Returns `NULL` if `str == NULL` or `str == ""`.
- If your function fails, it should return `NULL`.

