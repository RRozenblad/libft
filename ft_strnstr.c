#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    int j;

    i = 0;
    if (little[0] == '\0')
    {
	return ((char *)big);
    }
    while (big[i])
    {
	j = 0;
	while (big[i + j] == little[j] && i < len)
	{
	    if (little[j + 1] == '\0')
	    {
		return ((char *)&big[i]);
	    }
	    j++;
	}
	i++;
    }
    return (NULL);
}
