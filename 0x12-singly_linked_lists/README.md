# 0x12. C - Singly linked lists

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
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`.
- Don’t forget to push your header file.
- All your header files should be include guarded.

## Files
### lists.h
Stores the prototypes of all files.

### 0-print_list.c
Prints all the elements of a `list_t` list.
- Prototype: `size_t print_list(const list_t *h);`.
- Return: the number of nodes.
- Format: see example.
- If `str` is `NULL`, print `[0] (nil)`.
- You are allowed to use `printf`.

### 1-list_len.c
Returns the number of elements in a linked `list_t` list.
- Prototype: `size_t list_len(const list_t *h);`.

### 2-add_node.c
Adds a new node at the beginning of a `list_t` list.
- Prototype: `list_t *add_node(list_t **head, const char *str);`.
- Return: the address of the new element, or `NULL` if it failed.
- `str` needs to be duplicated.
- You are allowed to use `strdup`.

### 3-add_node_end.c
Adds a new node at the end of a `list_t` list.
- Prototype: `list_t *add_node_end(list_t **head, const char *str);`.
- Return: the address of the new element, or `NULL` if it failed.
- `str` needs to be duplicated.
- You are allowed to use `strdup`.

### 4-free_list.c
Frees a list_t list.
- Prototype: `void free_list(list_t *head);`.

### 100-first.c
Prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.
- Uses the printf function.

