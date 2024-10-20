/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:22:14 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/20 19:03:56 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_identifier(const char c, va_list *list)
// %u: unsigned integer
// %X / %x: hexadecimal upper/lower
// %p: the address of a pointer
{
	if (c == 'c')
		return (ft_char_printer(va_arg(*list, int)));
	else if (c == 's')
		return (ft_str_printer(va_arg(*list, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_printf_nbr(va_arg(*list, int)));
	else if (c == 'u')
		return (ft_printf_unsigned(va_arg(*list, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_hex_printer(va_arg(*list, unsigned int), c));
	else if (c == 'p')
		return (ft_ptr_printer(va_arg(*list, unsigned long)));
	else if (c == '%')
		return (ft_printf_char('%'));
	return (0);
	
}