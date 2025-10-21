#include "libft.h"

size_t	ft_strslen(char *s, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i] != s[i + 1])
			len++;
		i++;
	}
	return (len);
}

void	*ft_free(char **liststr)
{
	size_t	i;

	i = 0;
	while (liststr[i])
	{
		free(liststr[i]);
		i++;
	}
	free(liststr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	**result;

	if (s == NULL)
		return (NULL);
	result = (char **) ft_calloc((ft_strslen((char *) s, c) + 2), sizeof(char *));
	i = 0;
	start = 0;
	j = 0;
	while (i <= ft_strlen((char *) s))
	{
		if ((s[i] == c && s[i] != s[i + 1]) || s[i] == '\0')
		{
			result[j] = ft_substr((char *) s,start,i - start);
			if (result[j] == NULL)
				return (ft_free(result));
			start = i + 1;
			j++;
			i++;
		}
		i++;
	}
	return (result);
}
int main()
{
	// char x[] = "hello everyone my mane is Mohsine";
	char **y=ft_split("mymnamemis  mm Mohsine",'m');
	size_t i =0;
	if (y != NULL)
	{
		while (y[i])
		{
			printf("result[%zu] ==> %s\n",i,y[i]);
			i++;
		}
	}
	else
		printf("the result is NULL\n");
	
	return 0;
}
