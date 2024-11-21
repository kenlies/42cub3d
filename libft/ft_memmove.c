#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*s;
	char		*d;

	i = 0;
	s = (char *) src;
	d = (char *) dst;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
