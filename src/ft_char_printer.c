#include "ft_printf.h"

int	ft_char_printer(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

// int	main()
// {
// 	char	a_char;
//
// 	a_char = 'c';
// 	ft_char_printer(a_char);
// 	write(1, "\n", 1);
// 	return (0);
// }
//
// // cc ft_char_printer.c ../my_lib/ft_putchar_fd.c