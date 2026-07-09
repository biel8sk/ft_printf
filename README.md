_This project has been created as part of the 42 curriculum by gpires-c_ 

# ft_printf

A custom reimplementation of the standard C `printf` function, developed as part of the 42 curriculum. The goal of this project is to understand how variadic functions work, how formatted output is generated, and how the original `printf` behaves across different formatting scenarios.

---

# Description

`ft_printf` is a lightweight implementation of the standard C `printf` function written entirely in C.

The project reproduces the behavior of the original function for the mandatory format specifiers while respecting the expected return values and output formatting. Since `printf` is one of the most widely used functions in the C standard library, rebuilding it from scratch provides valuable insight into:

- Variadic functions (`...`, `va_list`, `va_start`, `va_arg`, and `va_end`)
- Low-level output using `write()`
- Number-to-string conversions
- Hexadecimal formatting
- Pointer formatting
- Return value management
- Replicating the exact behavior of the original implementation whenever possible

The implementation was written with readability and modularity in mind, separating each conversion into its own dedicated function.

---

# Instructions

## Clone the repository

```bash
git clone https://github.com/biel8sk/ft_printf.git ft_printf
cd ft_printf
```

## Compile

```bash
make
```

This generates the static library:

```text
libftprintf.a
```

## Include in your project

```c
#include "ft_printf.h"
```

Compile your project together with the generated library.

Example:

```bash
cc main.c libftprintf.a
```

## Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "World");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", &main);
}
```

---

# Resources

This project was developed primarily through experimentation, documentation, and extensive comparison with the behavior of the original `printf`.

The main resources used during development were:

- **Google** — used extensively to understand variadic functions (`...`), `stdarg.h`, `va_list`, `va_start`, `va_arg`, `va_end`, and several implementation details of the C language.
- **Python Tutor** — used to visualize program execution and verify the behavior of `printf` in different scenarios, helping reproduce its behavior as accurately as possible.
- **The C Standard Library documentation** — consulted to verify expected behavior, return values, and formatting rules.
- Extensive manual testing against the system `printf` to validate edge cases and ensure consistent output.

---

# Helper Functions

Besides the mandatory implementation, several helper functions were created to keep the code modular and reusable.

### `ft_putprt_fd`

```c
size_t ft_putprt_fd(void *p, int fd);
```

Writes a pointer to the given file descriptor using hexadecimal notation and returns the number of bytes written.

---

### `ft_revert_str`

```c
char *ft_revert_str(char *str);
```

Reverses a string in place.

This function is primarily used internally during pointer conversion.

---

### `ft_putunbr_fd`

```c
void ft_putunbr_fd(unsigned int n, int fd);
```

Writes an unsigned integer to the specified file descriptor.

---

### `ft_nlen_hex`

```c
size_t ft_nlen_hex(unsigned long n);
```

Returns the number of hexadecimal digits required to represent a number.

---

### `ft_puthex_fd`

```c
size_t ft_puthex_fd(unsigned long number, char flag, int fd);
```

Writes a hexadecimal representation of a number to the given file descriptor.

The `flag` parameter determines whether hexadecimal digits are printed in:

- lowercase (`'x'`)
- uppercase (`'X'`)

The function also returns the number of bytes written.

---

### `ft_unumlen`

```c
size_t ft_unumlen(unsigned int n);
```

Calculates how many decimal digits an unsigned integer contains.

When a negative integer is passed through an unsigned conversion, the function operates on its converted unsigned representation, matching the behavior expected by the project.

---

# AI Usage

Artificial Intelligence was **not** used during the implementation of the project itself.

The source code, algorithms, debugging, and overall implementation were completed independently.

AI assistance was only used after the project was finished to help write and organize this README, improving its structure, grammar, and readability.

---