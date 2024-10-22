# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 20:27:35 by hoskim            #+#    #+#              #
#    Updated: 2024/10/22 21:04:00 by hoskim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = my_lib/libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCES = src/ft_printf.c src/ft_type_identifier.c \
		  src/ft_nbr_printer.c src/ft_unsigned_printer.c \
		  src/ft_char_printer.c src/ft_percent_printer.c \
		  src/ft_str_printer.c src/ft_hex_printer.c \
		  src/ft_ptr_printer.c
OBJECTS = $(SOURCES:.c=.o)

LIBFT_SRCS = my_lib/ft_memset.c my_lib/ft_bzero.c my_lib/ft_memcpy.c \
			 my_lib/ft_memmove.c my_lib/ft_memchr.c my_lib/ft_memcmp.c my_lib/ft_strlen.c \
			 my_lib/ft_strlcpy.c my_lib/ft_strlcat.c my_lib/ft_strchr.c my_lib/ft_strrchr.c \
			 my_lib/ft_strnstr.c my_lib/ft_strncmp.c my_lib/ft_atoi.c my_lib/ft_isalpha.c \
			 my_lib/ft_isdigit.c my_lib/ft_isalnum.c my_lib/ft_isascii.c my_lib/ft_isprint.c \
			 my_lib/ft_toupper.c my_lib/ft_tolower.c my_lib/ft_calloc.c my_lib/ft_strdup.c \
			 my_lib/ft_substr.c my_lib/ft_strjoin.c my_lib/ft_strtrim.c my_lib/ft_split.c \
			 my_lib/ft_itoa.c my_lib/ft_striteri.c my_lib/ft_strmapi.c my_lib/ft_putchar_fd.c \
			 my_lib/ft_putstr_fd.c my_lib/ft_putendl_fd.c my_lib/ft_putnbr_fd.c
LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)

$(NAME): $(OBJECTS) $(LIBFT)
	ar rcs $@ $(OBJECTS) $(LIBFT_OBJS)

$(LIBFT): $(LIBFT_OBJS)
	ar rcs $@ $(LIBFT_OBJS)

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

my_lib/%.o: my_lib/%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJECTS) $(LIBFT_OBJS)

fclean: clean
	rm -f $(NAME) $(LIBFT)

re: fclean all

main: all
	$(CC) $(CFLAGS) -o main main.c $(NAME) $(LIBFT)

.PHONY: all clean fclean re main
