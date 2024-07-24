# printf Project

## Description
This project is a custom implementation of the printf function in C. The goal is to create a function _printf that replicates the functionality of the standard printf function, but with some limitations. The function supports the following format specifiers:
- %c: prints a character
- %s: prints a string
- %%: prints a percent sign

## Files
- *main.h*: Header file containing function prototypes and necessary includes.
- *_printf.c*: Implementation of the _printf function.
- *_putchar.c*: Implementation of the _putchar function.
- *main.c*: Test file for verifying the functionality of _printf.

## Requirements
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- Your code should use the Betty style.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- The prototypes of all your functions should be included in your header file called main.h.
- All your header files should be include guarded.

## Compilation
To compile the code, navigate to the project directory and use the following command:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf
Authors: Sarkhan Baghirli  and Sabina Allahverdiyeva
