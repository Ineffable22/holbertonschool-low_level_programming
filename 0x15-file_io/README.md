# 0x15. C - File I/O

### Requirements:
## C
- Allowed editors: `vi`, `vim`, `emacs`.
All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project.
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl).
- You are not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden.
- Allowed syscalls: `read`, `write`, `open`, `close`.
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c).
 -You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account.
 -In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`.
- Don’t forget to push your header file.
- All your header files should be include guarded.
- Tip: always prefer using symbolic constants (`POSIX`) vs numbers when it makes sense. For instance `read(STDIN_FILENO, ...` vs `read(0, ...`.

## Files
### main.h
Stores the prototypes of all files.

### 0-read_textfile.c
Reads a text file and prints it to the `POSIX` standard output.
- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`.
- Where letters is the number of letters it should read and print.
- returns the actual number of letters it could read and print.
- If the file can not be opened or read, return `0`.
- If `filename` is `NULL` return `0`.
- If `write` fails or does not write the expected amount of bytes, return `0`.

### 1-create_file.c
Creates a file.
- Prototype: `int create_file(const char *filename, char *text_content);`.
- Where `filename` is the name of the file to create and `text_content` is a `NULL` terminated string to write to the file.
- Returns: `1` on success, `-1` on failure (file can not be created, file can not be written, `write` “fails”, etc…).
- The created file must have those permissions: `rw-------`. If the file already exists, do not change the permissions.
- If the file already exists, truncate it.
- If `filename` is `NULL` return `-1`.
- If `text_content` is `NULL` create an empty file.

### 2-append_text_to_file.c
Appends text at the end of a file.
- Prototype: `int append_text_to_file(const char *filename, char *text_content);`.
- Where `filename` is the name of the file and `text_content` is the `NULL` terminated string to add at the end of the file.
- Return: `1` on success and `-1` on failure.
- Do not create the file if it does not exist.
- If `filename` is `NULL` return `-1`.
- If `text_content` is `NULL`, do not add anything to the file. Return `1` if the file exists and `-1` if the file does not exist or if you do not have the required permissions to write the file.

### 3-cp.c
Copies the content of a file to another file.
- Usage: `cp file_from file_to`.
- If the number of argument is not the correct one, exit with code `97` and print `Usage: cp file_from file_to`, followed by a new line, on the `POSIX` standard error.
- If `file_to` already exists, truncate it.
- If `file_from` does not exist, or if you can not read it, exit with code `98` and print `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new line, on the `POSIX` standard error.
	- Where `NAME_OF_THE_FILE` is the first argument passed to your program.
- If you can not create or if `write` to `file_to` fails, exit with code `99` and print `Error: Can't write to NAME_OF_THE_FILE`, followed by a new line, on the `POSIX` standard error.
	- Where `NAME_OF_THE_FILE` is the second argument passed to your program.
- If you can not close a file descriptor , exit with code `100` and print `Error: Can't close fd FD_VALUE`, followed by a new line, on the `POSIX` standard error.
	- Where `FD_VALUE` is the value of the file descriptor.
- Permissions of the created file: `rw-rw-r--`. If the file already exists, do not change the permissions.
- You must read `1,024` bytes at a time from the `file_from` to make less system calls. Use a buffer.
- Uses dprintf.

### 100-elf_header.c
Displays the information contained in the `ELF` header at the start of an `ELF` file.
- Usage: `elf_header elf_filename`
- Displayed information: (no less, no more, do not include trailing whitespace)
	- Magic
	- Class
	- Data
	- Version
	- OS/ABI
	- ABI Version
	- Type
	- Entry point address
- Format: the same as `readelf -h` (version `2.26.1`).
- If the file is not an `ELF` file, or on error, exit with status code `98` and display a comprehensive error message to `stderr`.
- Uses `lseek` once.
- Uses `read` a maximum of 2 times at runtime.
- Uses `printf`.

