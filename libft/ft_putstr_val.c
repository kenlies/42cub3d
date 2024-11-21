#include "libft.h"

int	ft_putstr_val(char *s)
{
	int	ret;

	ret = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
	{
		ft_putchar_val(*s);
		s++;
		ret++;
	}
	return (ret);
}
