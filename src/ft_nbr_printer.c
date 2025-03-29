#include "ft_printf.h"

int	ft_nbr_printer(int n)
{
	int	output_len;

	output_len = 0;
	if (n == -2147483648)
	{
		output_len += ft_putstr_fd("-2147483648", 1);
		return (output_len);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		output_len++;
		n = -n;
	}
	if (n >= 10)
		output_len += ft_nbr_printer(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
	output_len++;
	return (output_len);
}

// int	main()
// {
// 	int	number;
// 	int len = 0;
//
// 	number = -982;
// 	printf("The given number: ");
// 	fflush(stdout);
// 	len = ft_nbr_printer(number);
// 	printf("\nThe length of the output: %d\n", len);
// 	return (0);
// }
// // cc ft_nbr_printer.c ../my_lib/ft_putchar_fd.c
// // ../my_lib/ft_putstr_fd.c ../my_lib/ft_strlen.c