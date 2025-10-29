/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 00:11:27 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/29 12:36:02 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char const *s, char c)
{
	size_t	wordcount;
	size_t	i;
	size_t	len;

	if (c == 0)
		return (1);
	i = 0;
	wordcount = 0;
	len = ft_strlen(s);
	while (s[i] == c)
		i++;
	while (i < len)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			wordcount++;
		i++;
	}
	return (wordcount);
}

size_t	ft_endword(char const *s, size_t i, char c)
{
	while (s[i] != c && s[i])
		i++;
	return (i);
}

void	*ft_freeres(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

int	ft_fillres(char const *s, char **res, char c)
{
	size_t	start;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (i < ft_strlen(s) && s[i] != c)
			i++;
		res[j] = ft_substr(s, start, i - start);
		if (!res[j])
			return (0);
		j++;
	}
	res[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	size_t	wordcount;

	if (!s)
		return (NULL);
	wordcount = ft_wordcount(s, c);
	res = ft_calloc(wordcount + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	if (!ft_fillres(s, res, c))
		return (ft_freeres(res));
	res[wordcount] = NULL;
	return (res);
}
