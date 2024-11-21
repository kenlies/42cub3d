#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (ret == NULL)
		return (0);
	while (*s1 != '\0')
	{
		ret[i] = *s1;
		i++;
		s1++;
	}
	ret[i] = '\0';
	return (ret);
}
