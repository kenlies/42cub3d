#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*c;

	s = (char *) src;
	c = dst;
	if (c == NULL && s == NULL)
		return (NULL);
	while (n > 0)
	{
		*c = *s;
		s++;
		c++;
		n--;
	}
	return (dst);
}
