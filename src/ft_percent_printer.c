/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent_printer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:52:48 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/21 21:26:03 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_percent_printer(int percent)
{
	if (percent == '%')
		ft_putchar_fd('%', 1);
	return (1);
}

// int	main(void)
// {
// 	int	percent;
//
// 	percent = '%';
// 	ft_percent_printer(percent);
// 	printf("\n");
// 	return (0);
// }
//
// cc ft_percent_printer.c ../my_lib/ft_putchar_fd.c