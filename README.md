*This project has been created as part of the 42 curriculum by absafi.*

# ft_printf

## Description

**ft_printf** is a project at 42 Amman whose goal is to re-implement the standard C `printf` function from `<stdio.h>`. The function prints formatted output to the standard output according to a format string and a variable number of arguments.

The project introduces variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`) and encourages a clean, extensible design, since the function is meant to be reused in later 42 projects.

The final result is a static library named `libftprintf.a`.

## Project Description

The prototype of the function is:

```c
int ft_printf(const char *format, ...);
```

It behaves like the original `printf`, with these rules:

- The function does not manage a buffer, unlike the original `printf`.
- It returns the total number of characters printed, or a negative value on error.
- It only handles the conversions listed below.

### Supported conversions

- `%c` prints a single character.
- `%s` prints a string (prints `(null)` when the pointer is NULL).
- `%p` prints a `void *` pointer argument in hexadecimal format (prints `(nil)` when the pointer is NULL).
- `%d` prints a decimal (base 10) number.
- `%i` prints an integer in base 10.
- `%u` prints an unsigned decimal (base 10) number.
- `%x` prints a number in lowercase hexadecimal (base 16).
- `%X` prints a number in uppercase hexadecimal (base 16).
- `%%` prints a percent sign.

### Design

The format string is read one character at a time. Plain characters are written directly with `write`. When a `%` is found, the next character selects the conversion, and a dedicated helper prints the matching argument taken from the `va_list`. Each helper returns the number of characters it wrote, and these values are summed to produce the return value of `ft_printf`.

## Instructions

### Compilation

A C compiler and `make` are required.

To compile the library, run the following command at the root of the repository:

```bash
make
```

This generates the static library:

```text
libftprintf.a
```

The Makefile provides the following targets:

```bash
make
make all
make clean
make fclean
make re
```

The compilation uses the flags `-Wall -Wextra -Werror`, and the library is created with the `ar` command.

### Usage

Include the header in your source file and link against the library:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, you are number %d\n", "world", 42);
    return (0);
}
```

```bash
cc main.c libftprintf.a
```

## Prerequisites

- A C compiler (`cc`)
- `make`
- Linux or another Unix-like environment

## Resources

- Linux manual pages.
- *The C Programming Language* by Brian W. Kernighan and Dennis M. Ritchie
- [Makefile Tutorial](https://makefiletutorial.com/)
- [ft_printf tester](https://github.com/Tripouille/printfTester)

### AI Usage

**Google Gemini** was used as a supplementary learning and verification tool during the project.

It was used for:

- Clarifying concepts and information that were not fully explained in the 42 project manual.
- Checking my understanding of `Makefile` concepts and syntax.
- Providing additional examples to reinforce my understanding of C concepts such as variadic functions.
- Reviewing my reasoning about function behavior.
