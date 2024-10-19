/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:52:19 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/19 13:02:30 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// !str, str == 0, str == NULL
int	ft_str_printer (char *str)
{
	int len;

	if (!str)
	{
		len = ft_putstr_fd("(null)", 1);
		return (len);
	}
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	return (len);
}