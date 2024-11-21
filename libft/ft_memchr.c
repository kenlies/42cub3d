#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	u;

	str = (char *) s;
	u = (char) c;
	if (n == 0)
		return (NULL);
	while (n > 1 && *str != u)
	{
		str++;
		n--;
	}
	if (*str == u)
		return (str);
	else
		return (NULL);
}
