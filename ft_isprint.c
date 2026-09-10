int	ft_isprint(int c)
{
	if (c >= 32 && c <= 255)
	{
		return (1);
	}	
	return (0);
}
