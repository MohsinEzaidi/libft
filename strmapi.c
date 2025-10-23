#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char	*result;

	if (!s || !f)
		return (NULL);
	len = (unsigned int)ft_strlen(s);
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i,s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}