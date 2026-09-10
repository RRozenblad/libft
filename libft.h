int	strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (i < n)
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

int	ft_atoi(const char *str)
{
	int i;

	i = 0;
	while(str[i] ""
}

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0); 
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return(1);
	}
	return (0);
}


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

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (0);
	}
	return (1);

}

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 255)
	{
		return (1);
	}	
	return (0);
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);	
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
