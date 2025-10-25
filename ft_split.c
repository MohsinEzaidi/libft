#include "libft.h"

size_t	ft_wordcount(char *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	wordcount;

	len = 0;
	i = 0;
	wordcount = 0;

	
	while (s[i])
	{
		if (s[i] != c && wordcount == 0)
		{
			wordcount = 1;
			len++;
		}
		else if(s[i] == c)
			wordcount = 0;
		i++;
	}
	return (len);
}

void	*ft_freelist(char **liststr)
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
	result = (char **) ft_calloc((ft_wordcount((char *) s, c) + 1), sizeof(char *));
	i = 0;
	j = 0;
	start = 0;
	while (i <= ft_strlen((char *) s))
	{
		if ((s[i] == c && s[i + 1] != c) || s[i] == '\0')
		{
			result[j] = ft_substr((char *) s,start,i - start);
			if (result[j] == NULL)
				return (ft_freelist(result));
			j++;
			i++;
			start = i;
		}
		i++;
	}
	return (result);
}
int main()
{
	// char x[] = "hello everyone my mane is Mohsine";
	char **y=ft_split("my name is mohsine and I dont give a daaaaaaamn and I also have a really reaaly reaaeaeaeaeaeealy good looking feriend ",' ');
	size_t i =0;
	// printf("the word count is: %zu\n", ft_strslen("  my name is mohsine and I dont give a daaaaaaamn and I also have a really reaaly reaaeaeaeaeaeealy good looking feriend ",' '));
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
