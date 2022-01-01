# 0x0E. C - Structures, typedef

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
### dog.h
Defines a new type `struct dog` with the following elements:
- `name`, type = `char *`.
- `age`, type = `float`.
- `owner`, type = `char *`.

### 1-init_dog.c
Writes a function that initialize a variable of type `struct dog`.
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`.

### 2-print_dog.c
Writes a function that prints a `struct dog`.
- Prototype: `void print_dog(struct dog *d);`.
- Format: see example bellow.
- You are allowed to use the standard library.
- If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`).
- If `d` is `NULL` print nothing.

### dog.h
Define a new type `dog_t` as a new name for the type `struct dog`.

### 4-new_dog.c
Writes a function that creates a new dog.
- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`.
- You have to store a copy of `name` and `owner`.
- Return `NULL` if the function fails.

### 5-free_dog.c
Writes a function that frees dogs.
- Prototype: `void free_dog(dog_t *d);`.

