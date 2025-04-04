#include "ft_printf.h"

int	ft_type_identifier(const char c, va_list *list)
// %u: unsigned integer
// %X / %x: hexadecimal upper/lower
// %p: the address of a pointer
{
	if (c == 'c')
		return (ft_char_printer(va_arg(*list, int)));
	else if (c == 's')
		return (ft_str_printer(va_arg(*list, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_nbr_printer(va_arg(*list, int)));
	else if (c == 'u')
		return (ft_unsigned_printer(va_arg(*list, int)));
	else if (c == 'x' || c == 'X')
		return (ft_hex_printer(va_arg(*list, unsigned int), c));
	else if (c == 'p')
		return (ft_ptr_printer(va_arg(*list, unsigned long long)));
	else if (c == '%')
		return (ft_char_printer('%'));
	return (0);
}
