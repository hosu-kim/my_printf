/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:46:27 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/21 22:07:46 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *string, ...)
// printf returns a number of printed characters
{
	va_list	args;
	int		output_len;
	int		temp;

	output_len = 0;
	temp = 0;
	va_start(args, string);
	while (*string)
	{
		if (*string == '%')
		{
			temp = ft_type_identifier(*++string, &args);
			if (temp == -1)
				return (-1);
			output_len += temp;
		}
		else
		{
			ft_putchar_fd(*string, 1);
			output_len++;
		}
		string++;
	}
	va_end(args);
	return (output_len);
}
