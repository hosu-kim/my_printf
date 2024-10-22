
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 16:37:38 by hoskim            #+#    #+#              #
#    Updated: 2024/10/18 21:24:21 by hoskim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source and object files
SOURCES = src/ft_printf.c src/ft_type_identifier.c \
			src/ft_nbr_printer.c src/ft_unsigned_printer.c \
			src/ft_char_printer.c src/ft_str_printer.c \
			src/ft_hex_printer.c src/ft_ptr_printer.c \
			src/ft_percent_printer.c
# changes the suffix of sources ".c" to ".o"
OBJECTS = $(SOURCES:.c=.o)
# Build the library
# -C: changes directory then runs
# cp: copy A to B
# ar: archieve, .o to .a
# r: insert files, 
# c: create ar, 
# s: create an index
# $@: $(NAME)
# $^: all dependencies; $>: first-
$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)

# Compile the source files to object files
src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)
# rebuild
re: fclean all