/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:53:28 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/23 21:02:37 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_printer(unsigned long long hex, char c)
{
	int		output_len;
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (c == 'X')
		hex_digits = "0123456789ABCDEF";
	output_len = 0;
	if (hex >= 16)
		output_len += ft_hex_printer(hex / 16, c);
	output_len += ft_putchar_fd(hex_digits[hex % 16], 1);
	return (output_len);
}

// int	main()
// {
// 	unsigned long long	hex;
// 	int output_len;
// 	char *format = "X";
//	
// 	hex = 0xe4a34;
// 	printf("The given hexadecimal number is: ");
// 	fflush(stdout);
// 	output_len = ft_hex_printer(hex, format);
// 	printf("\nThe output length is: %d\n", output_len);
//	
// 	return (0);
// }
//
// // cc ft_hex_printer.c ../my_lib/ft_putchar_fd.c