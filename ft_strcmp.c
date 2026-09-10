int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
