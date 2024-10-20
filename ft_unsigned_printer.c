/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_printer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:48:56 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/19 21:55:46 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_unsinged_printer (unsigned int n)
{
	if (10 <= n)
		ft_unsinged_printer(n / 10);
	return (ft_putchar_fd(n, 1));
}