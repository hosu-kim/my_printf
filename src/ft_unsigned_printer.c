/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_printer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:48:56 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/21 21:40:09 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_printer(unsigned long long n)
{
	int	output_len;

	output_len = 0;
	if (10 <= n)
		ft_unsigned_printer(n / 10);
	output_len += ft_putchar_fd(n, 1);
	return (output_len);
}

// int	main()
// {
// 	unsigned long long number;
//
// 	number = 4289249892348;
// 	printf("The given unsigned number is: ");
// 	fflush(stdout);
// 	ft_unsigned_printer(number);
// 	printf("\n");
// 	return (0);
// }