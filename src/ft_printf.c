#include "ft_printf.h"
/*
Variadic list? (va_list)
	A special type used to pass several arguments to a fuction.
va_start(a, b)?
	it starts to consider a values as variadic arguments before b
va_arg(va_list, type)?
	to call an argument stored in va_list args;
va_end(a)?
	ends processing va_list
*/
int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		output_len;
	int		temp;

	output_len = 0;
	temp = 0;
	va_start(args, string);
	while (*string)
	{
		if (*string == '%')
		{
			temp = ft_type_identifier(*++string, &args);
			if (temp == -1)
				return (-1);
			output_len += temp;
		}
		else
		{
			ft_putchar_fd(*string, 1);
			output_len++;
		}
		string++;
	}
	va_end(args);
	return (output_len);
}
