#include <unistd.h>

int	ft_putchar_val(char c)
{
	write(1, &c, 1);
	return (1);
}
