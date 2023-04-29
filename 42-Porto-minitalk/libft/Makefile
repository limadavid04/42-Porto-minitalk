# # -*- Makefile -*-
NAME = libft.a
CC = cc
CFLAGS =-Wall -Wextra -Werror
FILES = ft_isascii  ft_memcpy  ft_strjoin  ft_strrchr\
ft_atoi     ft_isdigit  ft_memmove  ft_strlcat ft_strtrim\
ft_bzero   ft_isprint ft_memset   ft_strlcpy  ft_substr\
ft_calloc   ft_memccpy  ft_split    ft_strlen   ft_tolower\
ft_isalnum  ft_memchr   ft_strchr   ft_strncmp  ft_toupper\
ft_isalpha  ft_memcmp   ft_strdup   ft_strnstr ft_itoa ft_strmapi\
ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd\
ft_printf ft_char_format ft_string_format ft_pointer_format ft_decimal_format\
ft_unsigned_format ft_hexadecimal_format ft_printf_utils
BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back\
ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

all: $(NAME)

$(NAME): $(FILES:=.o)
	ar -rc $(NAME) $(FILES:=.o)

bonus : $(FILES:=.o) $(BONUS:=.o)
	ar -rc $(NAME) $(FILES:=.o) $(BONUS:=.o)
clean:
	rm -f $(FILES:=.o) $(BONUS:=.o)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
