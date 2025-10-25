/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:31:27 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/18 11:33:48 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	ch;
	char	*r;

	i = 0;
	len = 0;
	ch = (char) c;
	r = (char *) s;
	if (ch == '\0')
		return ("");
	while (r[i])
	{
		if (r[i] == ch)
			return (&r[i]);
		i++;
	}
	return (NULL);
}
