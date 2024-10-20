/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:08:31 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/20 20:41:09 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_nbr_printer (int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len += ft_putstr_fd("-2147483648", 1);
		return len;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		len++;
		n = -n;
	}
	if (n >= 10)
		len += ft_nbr_printer(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
	len++;
	return (len);
}

int	main()
{
	int	number;
	int len = 0;

	number = -9829;
	len = ft_nbr_printer(number);

	printf("%d\n", len);
	return (0);
}
// cc ft_nbr_printer.c ../my_lib/ft_putchar_fd.c