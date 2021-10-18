# 0x03. C - Debugging

### Requirements:
- Allowed editors: `vi`, `vim`, `emacs`.
All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl).
- A `README.md` file at the root of the repo, containing a description of the repository.
- A `README.md` file, at the root of the folder of this project (i.e. `0x03-debugging`), describing what this project is about.

## Files
### main.h
Stores the prototypes of all files.

### 0-main.c
Tests that the function positive_or_negative() gives the correct output when given a case of 0.

```
carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$
```
```
carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$ 
```

```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$
```

### 1-main.c
Comments out the part of the code that is causing the output to go into an infinite loop.
- Does not add or remove any line of code.
- You don't need to compile with -Wall -Werror -Wextra -pedantic for this task.

### 2-largest_number.c
Fixed code bug in `2-larger_number.c` to correctly print the largest of three numbers, no matter the case.

### 3-print_remaining_days.c
Fixed code bug `3-print_remaining_days()` function so that the output works correctly for all dates and all leap years.