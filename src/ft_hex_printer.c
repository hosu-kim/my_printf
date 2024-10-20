/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:53:28 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/20 19:43:51 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_printer (unsigned long long hex)
{
	int	len;
	
	len = 0;
	if (16 <= hex)
		ft_hex_printer(hex / 16);
	len += ft_putchar_fd("0123456789ABCDEF"[hex % 16], 1);
	return (len);
}
