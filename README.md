# my_printf
## Overview
`ft_printf` is a custom implementation of the standard C library function `printf`. It is designed to handle various data types and format specifiers, providing flexible string formatting and output. This project focuses on understanding how `printf` works internally and replicating its functionality in a simpler, custom implementation.
## Table of Contents
1. [Overview](#overview)
2. [Features](#features)
3. [Installation and Usage](#installation-and-usage)
4. [Supported Format Specifiers](#supported-format-specifiers)
5. [Project Structure](#project-structure)
6. [Build and Run](#build-and-run)
7. [Additional Information](#additional-information)
8. [Author](#author)
## Features
- Implements a custom `ft_printf` function with similar behavior to `printf`.
- Supports variable arguments to output different data types.
- Fully compliant with C language standards.
- Memory-safe and efficient implementation.
## Installation and Usage
1. Clone the Repository
```sh
git clone https://github.com/hosu-kim/my_printf.git
cd my_printf
```
2. Build the Library
```sh
make
```
3. Link the Library to Your Project
- To use `ft_printf` in your own project, link the compiled `my_printf.a` and `my_libft.a` libraries:
```sh
  gcc -Wall -Wextra -Werror -o your_program your_program.c my_printf.a my_libc/my_libft.a
```
## Supported Format Specifiers
The following format specifiers are supported by `ft_printf`:
| Specifier	| Description                    |
|:--------|:---------------------------------|
| `%c`    | Single character                 |
| `%s`    | String                           |
| `%p`    | Pointer address                  |
| `%d`    | Signed integer (decimal)         |
| `%i`    | Signed integer (decimal)         |
| `%u`    | Unsigned integer (decimal)       |
| `%x`    | Unsigned hexadecimal (lowercase) |
| `%X`    | Unsigned hexadecimal (uppercase) |
| `%%`    | Prints a literal '%'             |
## Project Structure
### Directories
- `src/`: Source code for `my_printf`.
- `my_libc/`: Source code for the `my_libft` library.
- `includes/`: Header file (`ft_printf.h`).
### Key Files
- `src/ft_printf.c`: Main implementation of the `ft_printf` function.
- `src/ft_type_identifier.c`: Handles format specifier parsing.
- `src/ft_*_printer.c`: Outputs data based on the format specifier.
- `my_libc/`: Contains auxiliary `my_libft` functions used by `ft_printf`.
## Build and Run
1. Build the Libraries
  ```sh
  make
  ```
2. Run a Test Program
   - Create a `main.c` file to test the functionality, then build and run:
   ```sh
   make main
   ./main
   ```
3. Clean Up
   - Remove object files:
   ```sh
   make clean
   ```
   - Remove all build files, including the libraries:
   ```sh
   make fclean
   ```
4. Rebuild Everything
   ```sh
   make re
   ```
## Additional Information
- Constraints:
  - The implementation avoids external libraries except for standard C functions like `write`.
  - It includes custom versions of standard utility functions found in `libft`.
- Troubleshooting:
  - Ensure `main.c` exists when testing. If missing, create one with the desired test cases.
## Author
- Name: hosu-kim
- Email: hoskim@student.42prague.com
   
