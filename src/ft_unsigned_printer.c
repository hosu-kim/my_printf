/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_printer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:48:56 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/20 18:25:36 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsinged_printer (unsigned long n)
{
	int	output_len;

	output_len = 0;
	if (10 <= n)
		ft_unsinged_printer(n / 10);
	output_len += ft_putchar_fd(n, 1);
	
	return (output_len);
}

int	main()
{
	unsigned long unsigned_int;
	
	unsigned_int = 4289249892348;
	ft_unsinged_printer(unsigned_int);
	return (0);
}