#variables, het is anders dan C, voor een deel is het Shell, soort bash
#de makefile is een lijst van regeltjes

NAME	= libft.a
CC		= cc
CFLAGS 	= -Wall -Werror -Wextra
SRCS	= ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c
#ft_strlcpy.c
#ft_strlcat.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME) $(OBJS)
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re

#mrun: re
#	make clean; cc main.c $(NAME) $(CFLAGS); ./a.out