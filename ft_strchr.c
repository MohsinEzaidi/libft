/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:31:27 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/28 09:41:35 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*r;

	i = 0;
	len = 0;
	r = (char *) s;
	while (r[i])
	{
		if (r[i] == (unsigned char)c)
			return (&r[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&r[i]);
	return (NULL);
}
