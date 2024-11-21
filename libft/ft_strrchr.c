char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	u;

	str = (char *) s;
	u = (char) c;
	while (*str != '\0')
		str++;
	while (*str != u && str > s)
		str--;
	if (*str == u)
		return (str);
	return (0);
}
