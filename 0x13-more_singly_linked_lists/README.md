# 0x13. C - More singly linked lists

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

### 0-print_listint.c
Prints all the elements of a `listint_t` list.
- Prototype: `size_t print_listint(const listint_t *h);`.
- Return: the number of nodes.
- Format: see example.
- Uses `printf`.

### 1-listint_len.c
Returns the number of elements in a linked `listint_t` list.
- Prototype: `size_t listint_len(const listint_t *h);`.

### 2-add_nodeint.c
Adds a new node at the beginning of a `listint_t` list.
- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`.
- Return: the address of the new element, or `NULL` if it failed.

### 3-add_nodeint_end.c
Adds a new node at the end of a `listint_t` list.
- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`.
- Return: the address of the new element, or `NULL` if it failed.

### 4-free_listint.c
Frees a `listint_t` list.
- Prototype: `void free_listint(listint_t *head);`.

### 5-free_listint2.c
Frees a `listint_t` list.
- Prototype: `void free_listint2(listint_t **head);`.
- The function sets the `head` to `NULL`.

### 6-pop_listint.c
Deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
- Prototype: `int pop_listint(listint_t **head);`.
- if the linked list is empty return `0`.

### 7-get_nodeint.c
Returns the nth node of a `listint_t` linked list.
- Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`.
- Where `index` is the index of the node, starting at `0`.
- If the node does not exist, return `NULL`.

### 8-sum_listint.c
Returns the sum of all the data (n) of a `listint_t` linked list.
- Prototype: `int sum_listint(listint_t *head);`.
- If the list is empty, return `0`.

### 9-insert_nodeint.c
Inserts a new node at a given position.
- Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`.
- Where `idx` is the index of the list where the new node should be added. Index starts at `0`.
- Returns: the address of the new node, or `NULL` if it failed.
- If it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`.

### 10-delete_nodeint.c
Deletes the node at index `index` of a `listint_t` linked list.
- Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`.
- Where `index` is the index of the node that should be deleted. Index starts at `0`.
- Returns: `1` if it succeeded, `-1` if it failed.

### 100-reverse_listint.c
Reverses a `listint_t` linked list.
- Prototype: `listint_t *reverse_listint(listint_t **head);`.
- Returns: a pointer to the first node of the reversed list.
- You are not allowed to use more than `1` loop.
- You are not allowed to use `malloc`, `free` or arrays.
- You can only declare a maximum of two variables in your function.

### 101-print_listint_safe.c
Prints a `listint_t` linked list.
- Prototype: `size_t print_listint_safe(const listint_t *head);`.
- Returns: the number of nodes in the list.
- This function can print lists with a loop.
- You should go through the list only once.
- If the function fails, exit the program with status `98`.
- Output format: see example.

### 102-free_listint_safe.c
Frees a `listint_t` list.
- Prototype: `size_t free_listint_safe(listint_t **h);`.
- This function can free lists with a loop.
- You should go though the list only once.
- Returns: the size of the list that was free’d.
- The function sets the `head` to `NULL`.

### 103-find_loop.c
Finds the loop in a linked list.
- Prototype: `listint_t *find_listint_loop(listint_t *head);`.
- Returns: The address of the node where the loop starts, or `NULL` if there is no loop.
- You are not allowed to use `malloc`, `free` or arrays.
- You can only declare a maximum of two variables in your function.

