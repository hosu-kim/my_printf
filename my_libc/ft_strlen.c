#include "libft.h"

int	ft_strlen(const char *s)
// returns the length of the provided string.
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int main()
// {
//     char *string = "12345";
//
//     printf("%d\n", ft_strlen(string));
//
//     return (0);
// }
//
// // cc -Wall -Werror -Wextra ft_strlen.c