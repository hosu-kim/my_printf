#include "libft.h"

int	ft_putchar_fd(char c, int fd)
// file descriptor: 0(input), 1(output), 2(error output)
{
	return (write(fd, &c, 1));
}

// int main()
// {
// 	char character;
// 	printf("The given character is: ");
// 	fflush(stdout); // to flush a buffer; 
// why buffer? more effective to print data together 
// 	ft_putchar_fd('A', 1);
// 	printf("\n");
// 	return (0);
// }
