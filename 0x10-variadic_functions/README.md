# 0x10. C - Variadic functions

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
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `variadic_functions.h`.
- Don’t forget to push your header file.
- All your header files should be include guarded.

## Files
### variadic_functions.h
Stores the prototypes of all files.

### 0-sum_them_all.c
Writes a function that returns the sum of all its parameters.
- Prototype: `int sum_them_all(const unsigned int n, ...);`.
- If `n == 0`, return `0`.

### 1-print_numbers.c
Writes a function that prints numbers, followed by a new line.
- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`.
- Where `separator` is the string to be printed between numbers.
- and `n` is the number of integers passed to the function.
- You are allowed to use `printf`.
- If `separator` is `NULL`, don’t print it.
- Print a new line at the end of your function.

### 2-print_strings.c
Writes a function that prints strings, followed by a new line.
- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`.
- Where `separator` is the string to be printed between the strings.
- And `n` is the number of strings passed to the function.
- You are allowed to use `printf`.
- If separator is `NULL`, don’t print it.
- If one of the string is `NULL`, print `(nil)` instead.
- Print a new line at the end of your function.

### 3-print_all.c
Writes a function that prints anything.
- Prototype: `void print_all(const char * const format, ...);`.
- Where `format` is a list of types of arguments passed to the function
	- `c`: `char`.
	- `i`: `integer`.
	- `f`: `float`.
	- `s`: `char *` (if the string is `NULL`, print `(nil)` instead).
	- any other char should be ignored.
- You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`.
- You can use a maximum of
	- 2 `while` loops.
	- 2 `if`.
- You can declare a maximum of `9` variables.
- You are allowed to use `printf`.
- Print a new line at the end of your function.

### 100-hello_world.asm
Write a 64-bit program in assembly that prints `Hello, World`, followed by a new line.
- You are only allowed to use the system call `write` (use `int` or `syscall`, not a call).
- Your program will be compiled using `nasm` and `gcc` (as follows).

