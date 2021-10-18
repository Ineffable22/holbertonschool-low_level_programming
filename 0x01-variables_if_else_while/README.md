# 0x01. C - Variables, if, else, while

### Requirements:
- Allowed editors: `vi`, `vim`, `emacs`.
All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project.
- There should be no errors and no warnings during compilation.
- You are not allowed to use `system`.
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl).

## Files
### 0. Positive anything is better than negative nothing
This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.
- You can find the source code, see the [random number source code](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c).
- The variable `n` will store a different value every time you will run this program.
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code.
- The output of the program should be:
	- The number, followed by
		- if the number is greater than 0: `is positive`.
		- if the number is 0: `is zero`.
		- if the number is less than 0: `is negative`.
	- followed by a new line.

### 1. The last digit
This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.
- You can find the source code, see the [random number source code](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c).
- The variable `n` will store a different value every time you will run this program.
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code.
- The output of the program should be:
	- The string `Last digit of`, followed by
	- `n`, followed by
	- The string `is`, followed by
		- if the last digit of `n` is greater than 5: the string `and is greater than 5`.
		- if the last digit of `n` is 0: the string `and is 0`.
		- if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`.
	- followed by a new line.
