/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:22:26 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/29 21:05:31 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup((char *)s1));
	start = 0;
	while (s1[start] && ft_strchr((char *)set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr((char *)set, s1[end]))
		end--;
	end++;
	result = ft_substr(s1, start, end - start);
	return (result);
}
