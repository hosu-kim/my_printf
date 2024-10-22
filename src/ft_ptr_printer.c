/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:11:48 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/21 21:42:50 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_printer(unsigned long long ptr)
{
	int	len;

	len = 0;
	len += ft_putstr_fd("0x", 1);
	if (ptr == 0)
		len += ft_putstr_fd("0", 1);
	else
	{
		len += ft_hex_printer(ptr, 'x');
	}
	return (len);
}

// int	main()
// {
// 	char	*pointer = "Coding is fun.";
// 	int		len;
//
// 	len = 0;
// 	printf("The output of my function: ");
// 	fflush(stdout);
// 	len = ft_ptr_printer((unsigned long long)pointer);
// 	printf("\nThe return of my function: %d", len);
// 	printf("\nThe output of printf:      %p\n", pointer);
// 	printf("The return of printf:      %d\n", len);
// 	return (0);
// }
//
// // cc ft_ptr_printer.c ft_hex_printer.c ../my_lib/ft_putstr_fd.c
// // ../my_lib/ft_putchar_fd.c ../my_lib/ft_strlen.c