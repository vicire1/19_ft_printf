# Ft_Printf

<align="center" img width="661" alt="Ft_printf" src="https://github.com/user-attachments/assets/4355d238-fcc6-4af0-afa6-8e35790c22ac">

## Description

The **ft_printf** project involves recreating the standard `printf()` function from the C standard library. The goal is to implement a custom `ft_printf()` function that mimics the behavior of `printf()`. This project is an excellent opportunity to learn about variadic functions in C, which allow a function to accept an indefinite number of arguments.

## Project Objectives

- Reimplement the core functionality of the `printf()` function.
- Handle various conversions such as characters, strings, pointers, integers, unsigned integers, and hexadecimal numbers.
- Gain experience in working with variadic functions in C.
- Develop a deeper understanding of formatted output in C.

## Content

  - Implement the `ft_printf()` function with the following prototype:

    ```c
    int ft_printf(const char *, ...);
    ```

  - Your function must handle the following conversions:
    - `%c` - Print a single character.
    - `%s` - Print a string.
    - `%p` - Print a pointer in hexadecimal format.
    - `%d` and `%i` - Print a decimal (base 10) integer.
    - `%u` - Print an unsigned decimal (base 10) integer.
    - `%x` - Print a number in hexadecimal (base 16) lowercase format.
    - `%X` - Print a number in hexadecimal (base 16) uppercase format.
    - `%%` - Print a percent sign.

## Compilation

1. **Compile the library:**

   ```bash
   make
   ```

1. **Compile the library:**

   ```bash
   make
   ```

2. **Clean object files:**

   ```bash
   make clean
   ```

3. **Remove all generated files, including the library:**

   ```bash
   make fclean
   ```

4. **Recompile everything from scratch:**

   ```bash
   make re
   ```
## Usage

To use the `ft_printf()` function in your project, include the necessary header files and compile your program with the `libftprintf.a` library:

```c
#include "ft_printf.h"

int main(void) {
    // Example usage
    ft_printf("Hello, ft_printf! Number: %d\n", 42);
    return (0);
}
```

To compile a program using ft_printf:

```bash
gcc -Wall -Wextra -Werror -L[path_to_libftprintf.a] -lftprintf your_program.c -o your_program
