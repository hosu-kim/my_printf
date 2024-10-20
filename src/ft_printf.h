/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:16:39 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/20 19:54:31 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../my_lib/libft.h"

typedef struct s_info
{
	int flag;
	int precision;
	int width;
	int print_zero;
	int is_va;
	int is_dot;
	int is_blank;
}	t_info;

// main ft_printf function declaration
int	ft_printf(const char *format, ...);

// Sub-functions declaration
int	ft_char_printer(int c);
int ft_nbr_printer (int n);
int	ft_unsinged_printer (unsigned long n);
int	ft_hex_printer (unsigned long long hex);
int	ft_str_printer (char *str);
int	ft_ptr_printer(char *ptr);

#endif
