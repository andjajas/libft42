*This project has been created as part of the 42 curriculum by andjajas.*

# LIBFT



## Description

This is my first Codam project and the goal is to create a custom C library by re-implementing a collection of standard functions. It's aim is to help understand and master memory management, string manipulation, and data structure handling in C by building them from scratch.

### Detailed Library Overview

The library consists of three different categories of functions:
> Part 1 - Libc functions:
Reimplementations of a set of functions from the libc with the same prototypes and behaviors as the originals, adhering strictly to their definitions in the man page. The only difference will be their names, which must start with the ’ft_’ prefix.
Here is a categorized list of all the libc functions of part 1:

	Character Checks & Conversions
		ft_isalpha.c – Checks for alphabetic characters.
		ft_isdigit.c – Checks for digits (0-9).
		ft_isalnum.c – Checks for alphanumeric characters.
		ft_isascii.c – Checks if a character fits in the ASCII table.
		ft_isprint.c – Checks for printable characters (including space).
		ft_toupper.c – Converts a lowercase letter to uppercase.
		ft_tolower.c – Converts an uppercase letter to lowercase.
		ft_atoi.c – Converts a string to an integer.

	String Manipulation
		ft_strlen.c – Calculates the length of a string.
		ft_strlcpy.c – Size-bounded string copying.
		ft_strlcat.c – Size-bounded string concatenation.
		ft_strchr.c – Locates the first occurrence of a character in a string.
		ft_strrchr.c – Locates the last occurrence of a character in a string.
		ft_strncmp.c – Compares two strings up to n characters.
		ft_strnstr.c – Locates a substring within a string.
		ft_strdup.c – Creates a duplicate of a string (using malloc).

	Memory Management
		ft_memset.c – Fills memory with a constant byte.
		ft_bzero.c – Sets a byte string to zero.
		ft_memcpy.c – Copies a memory area (non-overlapping).
		ft_memmove.c – Copies a memory area (safe for overlapping regions).
		ft_memchr.c – Scans memory for a specific character.
		ft_memcmp.c – Compares two memory areas.
		ft_calloc.c – Allocates memory and initializes it to zero.

> Part 2 - Additional functions:
A set of functions with custom utilities that are not included in the libc or exist in a different form. Here is a categorized list of all the functions of part 2:

	String Manipulation
		ft_substr.c – Extracts a substring from a string at a specific index.
		ft_strjoin.c – Concatenates two strings into a new, heap-allocated string.
		ft_strtrim.c – Trims specific characters from the beginning and end of a string.
		ft_split.c – Splits a string into an array of strings using a delimiter.
		ft_strmapi.c – Applies a function to each character of a string to create a new string.
		ft_striteri.c – Applies a function to each character of a string (modifies in-place).

	Data Conversion
		ft_itoa.c – Converts an integer into a null-terminated string (the reverse of atoi).

	File Descriptor Output (Write)
		ft_putchar_fd.c – Outputs a single character to a given file descriptor.
		ft_putstr_fd.c – Outputs a string to a given file descriptor.
		ft_putendl_fd.c – Outputs a string followed by a newline to a given file descriptor.
		ft_putnbr_fd.c – Outputs an integer to a given file descriptor.

> Part 3 - Linked List functions:
A set of tools to manage dynamic data structures using a custom t_list struct. Here is a categorized list of the functions of part 3:

	Linked List Management
		ft_lstnew.c – Creates a new list element with the provided content.
		ft_lstadd_front.c – Adds a new element to the beginning of the list.
		ft_lstsize.c – Counts the number of elements in a list.
		ft_lstlast.c – Returns the last element of the list.
		ft_lstadd_back.c – Adds a new element to the end of the list.
		ft_lstdelone.c – Deletes a specific element and frees its content using a given function.
		ft_lstclear.c – Deletes and frees an entire list and all its contents.
		ft_lstiter.c – Iterates through the list and applies a function to the content of each element.
		ft_lstmap.c – Creates a new list by applying a function to each element of the original list.



## Instructions

### Prerequisites
	To compile and use this library, you will need a C compiler (e.g. 'cc' or 'clang') and the 'make' utility installed on your system.

### Compilation
	The project includes a `Makefile` to automate the build process. Navigate to the root of the repository and use the following commands:

*   **Build the library:**
    ```bash
    make
    ```
    This will compile the source files and generate the library archive file (e.g., `libft.a`).

*   **Clean object files:**
    ```bash
    make clean
    ```
    Removes the intermediate `.o` files created during compilation.

*   **Full clean:**
    ```bash
    make fclean
    ```
    Removes both the object files and the compiled library file.

*   **Rebuild:**
    ```bash
    make re
    ```
    Performs a `fclean` followed by a `make` to ensure a fresh build.

### Installation and Execution
To integrate this library into your own C projects:

1.  **Include the header:** Add the following line to your source code:
    ```c
    #include "libft.h"
    ```

2.  **Link the library:** When compiling your project, specify the path to the library and link it using the `-L` and `-l` flags:
    ```bash
    cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
    ```
    *(Note: The `-lft` flag tells the compiler to look for `libft.a`. The `-L.` flag tells it to look in the current directory).*



## Resources

- **Manuals:** [Standard C Library Functions (Man 3)](https://man7.org)
- **Tutorials:** [C tutorial for beginners by Bro Code (YouTube)](https://www.youtube.com/playlist?list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe)
