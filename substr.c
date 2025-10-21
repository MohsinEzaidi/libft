/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:58:50 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/21 10:21:00 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	lenstart;
	size_t	i;

	if(!s)
		return NULL;
	if (start > ft_strlen((char *)s))
		return ft_strdup("");
	lenstart = ft_strlen((char *) s + start);
	if (len >lenstart)
		len = lenstart;
	substr = malloc(len + 1);
	if (!substr)
		return NULL;
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return substr;
}
// int main(int argc, char const *argv[])
// {
// 	printf("test for substr: %s\n",ft_substr("012345678",0,5));
// 	return 0;
// }

