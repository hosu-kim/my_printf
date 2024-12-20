/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:08:31 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/21 21:27:57 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbr_printer(int n)
{
	int	output_len;

	output_len = 0;
	if (n == -2147483648)
	{
		output_len += ft_putstr_fd("-2147483648", 1);
		return (output_len);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		output_len++;
		n = -n;
	}
	if (n >= 10)
		output_len += ft_nbr_printer(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
	output_len++;
	return (output_len);
}

// int	main()
// {
// 	int	number;
// 	int len = 0;
//
// 	number = -982;
// 	printf("The given number: ");
// 	fflush(stdout);
// 	len = ft_nbr_printer(number);
// 	printf("\nThe length of the output: %d\n", len);
// 	return (0);
// }
// // cc ft_nbr_printer.c ../my_lib/ft_putchar_fd.c
// // ../my_lib/ft_putstr_fd.c ../my_lib/ft_strlen.c