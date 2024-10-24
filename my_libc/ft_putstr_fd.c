/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:37:24 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/21 12:39:57 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
// prints the provided string one char by one char
{
	return (write(fd, s, ft_strlen(s)));
}

// int main()
// {
// 	char	*string = "I'm a string.\n";
// 	ft_putstr_fd(string, 1);
//
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_putstr_fd.c