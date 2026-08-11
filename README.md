*This project has been created as part of the 42 curriculum by mural*

# Description
Libft is a custom C standard library reimplementation built for the 42 curriculum. The goal is to deepen understanding of low-level C programming by recreating common libc utilities, plus additional helpers and a linked list API. The output is a static library, `libft.a`, that can be linked into other C projects.

# Instructions
## Build
```sh
make
```

## Bonus
```sh
make bonus
```

## Clean
```sh
make clean
make fclean
```

## Rebuild
```sh
make re
```

## Use in a project
```sh
cc -Wall -Wextra -Werror your_file.c -L. -lft
```
Make sure `libft.a` is in the same directory or adjust `-L` accordingly.

Include the header:
```c
#include "libft.h"
```

# Library Details
The library is split into classic libc-style helpers, extra string/memory utilities, and a linked list module.

## Character checks and case conversion
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.

## Memory utilities
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.

## String utilities
`ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.

## Conversion and allocation helpers
`ft_atoi`, `ft_itoa`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`.

## Higher-order string functions
`ft_strmapi`, `ft_striteri`.

## Output to file descriptor
`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

## Linked list
`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

# Resources
## References
- 42 libft subject PDF and evaluation page.
- `man` pages for the C standard library.

## AI usage
AI tools were used exclusively for learning and understanding the theoretical concepts behind the C library functions, and to assist in drafting this README file. No AI was used to write or generate any part of the source code, ensuring all implementations are strictly my own work.
