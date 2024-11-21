#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*s;

	s = b;
	while (len > 0)
	{
		*s = c;
		s++;
		len--;
	}
	return (b);
}
