#include "ft_printf.h"

int	ft_unsigned_printer(unsigned int n)
{
	int	output_len;

	output_len = 0;
	if (n >= 10)
		output_len += ft_unsigned_printer(n / 10);
	output_len += ft_putchar_fd((n % 10) + '0', 1);
	return (output_len);
}

// int	main()
// {
// 	unsigned long long number;
//
// 	number = 4289249892348; // Modify me
// 	printf("The given unsigned number is: ");
// 	fflush(stdout);
// 	ft_unsigned_printer(number);
// 	printf("\n");
// 	return (0);
// }
// // cc -Wall -Werror -Wextra ft_unsigned_printer.c ../my_libc/ft_putchar_fd.c