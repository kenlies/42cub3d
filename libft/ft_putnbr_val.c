#include "libft.h"

int	ft_putnbr_val(int n)
{
	int	ret;

	ret = 0;
	if (n == -2147483648)
	{
		ret += ft_putnbr_val(214748364 * -1);
		ret += ft_putnbr_val(8);
	}
	else if (n < 0)
	{
		ret += ft_putchar_val('-');
		ret += ft_putnbr_val(n * -1);
	}
	else if (n > 9)
	{
		ret += ft_putnbr_val(n / 10);
		ret += ft_putnbr_val(n % 10);
	}
	else
		ret += ft_putchar_val(n + '0');
	return (ret);
}
