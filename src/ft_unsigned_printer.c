/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_printer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:48:56 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/23 21:58:40 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_printer(unsigned int n)
{
	int	output_len;

	output_len = 0;
	if (n >= 10)
		output_len += ft_unsigned_printer(n / 10);
	output_len += ft_putchar_fd((n % 10) + '0', 1);
	return (output_len);
}

// int	main()
// {
// 	unsigned long long number;
//
// 	number = 4289249892348; // Modify me
// 	printf("The given unsigned number is: ");
// 	fflush(stdout);
// 	ft_unsigned_printer(number);
// 	printf("\n");
// 	return (0);
// }
// // cc -Wall -Werror -Wextra ft_unsigned_printer.c ../my_libc/ft_putchar_fd.c