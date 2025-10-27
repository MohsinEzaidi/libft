/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:34:39 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/27 15:29:03 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*origine;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	result = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!result)
		return (NULL);
	origine = result;
	while (*s1)
		*result++ = *s1++;
	while (*s2)
		*result++ = *s2++;
	*result = '\0';
	return (origine);
}
