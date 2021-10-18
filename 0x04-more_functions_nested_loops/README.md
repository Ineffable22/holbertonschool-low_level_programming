# 0x04. C - More functions, more nested loops

### Requirements:
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

### 0-isupper.c
Checks for uppercase character.
- Prototype: `int _isupper(int c);`.
- Returns `1` if `c` is uppercase.
- Returns `0` otherwise.
FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

### 1-isdigit.c
Checks for a digit (`0` through `9`).
- Prototype: `int _isdigit(int c);`.
- Returns `1` if `c` is digit.
- Returns `0` otherwise.
FYI: The standard library provides a similar function: `isupper`. Run `man isdigit` to learn more.

### 2-mul.c
Multiplies two integers.
- Prototype: `int mul(int a, int b);`.

### 3-print_numbers.c
Prints the numbers, from `0` to `9`, followed by a new line.
- Prototype: `void print_numbers(void);`.
- Only uses `_putchar` twice in your code.

### 4-print_most_numbers.c
Prints the numbers, from `0` to `9`, followed by a new line.
- Prototype: `void print_most_numbers(void);`.
- Does not print `2` and `4`.
- Only uses `_putchar` twice in your code.

### 5-more_numbers.c
Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.
- Prototype: `void more_numbers(void);`.
- Only uses `_putchar` three times in your code.

### 6-print_line.c
Draws a straight line in the terminal.
- Prototype: `void print_line(int n);`.
- You can only use `_putchar` function to print.
- Where `n` is the number of times the character `_` should be printed.
- The line should end with a `\n`.
- If `n` is `0` or less, the function should only print `\n`.

### 7-print_diagonal.c
Draws a diagonal line on the terminal.
- Prototype: `void print_diagonal(int n);`.
- You can only use `_putchar` function to print.
- Where `n` is the number of times the character `\` should be printed.
- The diagonal should end with a `\n`.
- If `n` is `0` or less, the function should only print a `\n`.

### 8-print_square.c
Prints a square, followed by a new line.
- Prototype: `void print_square(int size);`.
- You can only use `_putchar` function to print.
- Where `size` is the size of the square.
- If `size` is 0 or less, the function should print only a new line.
- Use the character `#` to print the square.

### 9-fizz_buzz.c
Prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.
- Each number or word should be separated by a space.
- It is allowed to use the standard library.

### 10-print_triangle.c
Prints a triangle, followed by a new line.
- Prototype: `void print_triangle(int size);`.
- You can only use `_putchar` function to print.
- Where `size` is the size of the triangle.
- If `size` is `0` or less, the function should print only a new line.
- Use the character `#` to print the triangle.

### 100-prime_factor.c
Finds and prints the largest prime factor of the number `612852475143`, followed by a new line.
- It is allowed to use the standard library.
- The program will be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`.

Example:

- The prime factors of `1231952` are `2`, `2`, `2`, `2`, `37` and `2081`.

### 101-print_number.c
Prints an integer.
- Prototype: `void print_number(int n);`.
- You can only use `_putchar` function to print.
- You are not allowed to use `long`.
- You are not allowed to use arrays or pointers.
- You are not allowed to hard-code special values.
