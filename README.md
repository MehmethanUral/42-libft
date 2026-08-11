*This project has been created as part of the 42 curriculum by Mehmethan Ural.*[cite: 3]

# Libft - Your Very First Own Library

## Description
Libft is the very first foundational project in the 42 curriculum. The goal of this project is to create a custom C library (`libft.a`) that includes numerous general-purpose functions[cite: 3]. Since the standard C library functions are often restricted in future school assignments, this project requires rewriting them from scratch to deeply understand their underlying mechanics, memory management, and algorithmic logic[cite: 3]. 

### Library Contents
This library is composed of three main sections[cite: 3]:

*   **Part 1 - Libc Functions:** Re-implementations of standard C library functions (e.g., `ft_strlen`, `ft_memset`, `ft_memcpy`, `ft_atoi`, `ft_strdup`, `ft_calloc`, etc.) with the exact same prototypes and behaviors as the originals[cite: 3].
*   **Part 2 - Additional Functions:** Highly useful utility functions that are either not in the standard libc or take a different form, designed for string manipulation and file descriptor outputs (e.g., `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`, `ft_putstr_fd`)[cite: 3].
*   **Part 3 - Linked List (Bonus):** A complete set of functions to create, manipulate, traverse, and free singly linked lists using a custom `t_list` structure (e.g., `ft_lstnew`, `ft_lstadd_back`, `ft_lstclear`, `ft_lstmap`)[cite: 3].

## Instructions

### Compilation
The library is compiled using a `Makefile` which strictly uses the `cc` compiler with `-Wall`, `-Wextra`, and `-Werror` flags[cite: 3]. 

To build the library, run the following commands in the root of the repository:
*   `make` or `make all`: Compiles the mandatory part and creates the `libft.a` static library[cite: 3].
*   `make bonus`: Compiles the bonus linked-list functions and adds them to `libft.a`[cite: 3].
*   `make clean`: Removes all `.o` object files[cite: 3].
*   `make fclean`: Removes all `.o` object files and the `libft.a` binary[cite: 3].
*   `make re`: Performs a complete rebuild (`fclean` followed by `all`)[cite: 3].

### Execution / Usage
To use this library in your own C projects:
1. Include the header file in your C files: `#include "libft.h"`
2. Compile your project alongside the library: `cc my_program.c -L. -lft -o my_program`

## Resources
*   **Manual Pages:** The standard Linux/Unix `man` pages (e.g., `man 3 strlen`) were the primary resource for understanding the exact behaviors of libc functions.
*   **GNU C Library / BSD libc:** Explored for edge-case behaviors regarding memory overlap and null-termination (specifically for `strlcpy` and `strlcat`).
*   **AI Usage Declaration:** AI tools were solely used to clarify theoretical concepts regarding pointer arithmetic and to review Makefile syntax. No code generation was utilized for the core function logic, adhering to the strict foundational learning requirements of the 42 AI policy.