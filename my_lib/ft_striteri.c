/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:14:04 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/10 21:18:18 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
// sends each element of s to the function.
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// void to_uppercase(unsigned int index, char *c)
// {
// 	(void)index;
//
//     if (*c >= 'a' && *c <= 'z')
//     {
//         *c = *c - 32;
//     }
// }
//
// int main()
// {
// 	char str[] = "Have a good day!";
// 	ft_striteri(str, to_uppercase);
// 	printf("%s\n", str);
//
// 	return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_striteri.c