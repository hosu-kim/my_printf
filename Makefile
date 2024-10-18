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

# compling variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
# var or all source files
SOURCES = ft_printf.c \
			ft_printf_parse.c \
			ft_printf_parse_fmt.c \
			ft_printf_set_spec_val.c
# changes the suffix of sources ".c" to ".o"
OBJECTS = $(SRCS:.c=.o)

# -c: compiles .c to .o
# -o $@: sets the name of .o files from .c files
# $<: first dependency(SOURCES)
.c_to_.o: $(SOURCES)
			$(CC) $(CFLAGS) -c -o $@ $<

# -C: changes directory then runs
# cp: copy A to B
# ar: archieve, .o to .a
# r: insert files, 
# c: create ar, 
# s: create an index
# $@: $(NAME)
# $^: all dependencies; $>: first-
$(NAME): $(OBJECTS)
		make all -C my_lib
		cp my_lib/libft.a $(NAME)
		ar rcs $@ $^
		
all: $(NAME)

clean:
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)
		make fclean -C my_lib
# rebuild
re: fclean all