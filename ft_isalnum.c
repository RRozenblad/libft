int	ft_isalnum(int c)
{
	if (c >= 'a' && <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && <= 'Z')
	{
		return (1);
	}
	if (c >= '0' && '9')
	{
		return (1);
	}
	return (0);
}
