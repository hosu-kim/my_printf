/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:52:19 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/21 13:54:35 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// !str, str == 0, str == NULL
int	ft_str_printer(char *str)
{
	int	output_len;

	output_len = 0;
	if (!str)
	{
		output_len = ft_putstr_fd("(null)", 1);
		return (output_len);
	}
	output_len += ft_putstr_fd(str, 1);
	return (output_len);
}

// int	main()
// {
// 	char	*string = "This is a string";
//
// 	ft_str_printer(string);
// 	return (0);
// }
// // cc ft_str_printer.c ../mylib/ft_putstr_fd.c