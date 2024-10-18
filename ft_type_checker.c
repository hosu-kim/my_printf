/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:22:14 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/18 21:36:36 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_checker(const char c, va_list *list)
{
	if (c == 'c')
		return (ft_printf_char(va_arg(*list, int)));
	else if (c == 's')
		return (ft_printf_str(va_arg(*list, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_printf_nbr(va_arg(*list, int)));
	else if (c == 'u')
		return (ft_printf_unsigned(va_arg(*list, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_printf_hex(va_arg(*list, unsigned int), c));
	else if (c == 'p')
		return (ft_printf_ptr(va_arg(*list, unsigned int), c));
	else if (c == '%')
		return (ft_printf_char('%'));
	return (0);
	
}