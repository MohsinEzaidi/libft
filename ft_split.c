/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 00:11:27 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/27 14:56:59 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		else if (s[i] == c)
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
	char	**res;

	if (s == NULL)
		return (NULL);
	res = (char **)ft_calloc((ft_wordcount((char *)s, c) + 1), sizeof(char *));
	i = 0;
	j = 0;
	start = 0;
	while (i <= ft_strlen(s))
	{
		if ((s[i] == c && s[i + 1] != c) || s[i] == '\0')
		{
			res[j] = ft_substr((char *) s, start, i - start);
			if (res[j] == NULL)
				return (ft_freelist(res));
			j++;
			i++;
			start = i;
		}
		i++;
	}
	return (res);
}
