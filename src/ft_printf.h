/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:16:39 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/23 18:00:46 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../my_libc/libft.h"

// main ft_printf function define
int	ft_printf(const char *string, ...);

// Sub-functions define
int	ft_type_identifier(const char c, va_list *list);
int	ft_ptr_printer(unsigned long long ptr);
int	ft_char_printer(int c);
int	ft_nbr_printer(int n);
int	ft_unsigned_printer(unsigned long long n);
int	ft_hex_printer(unsigned long long hex, char c);
int	ft_str_printer(char *str);
int	ft_percent_printer(int percent);

#endif
