/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:49:20 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/28 09:39:08 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*r;

	r = (char *) s;
	len = ft_strlen(r);
	while (len > 0)
	{
		if (r[len] == (unsigned char)c)
			return (&r[len]);
		len-- ;
	}
	if (r[0] == (unsigned char)c)
		return (&r[0]);
	return (NULL);
}
// int main(int argc, char const *argv[])
// {
// 	char s[] = "tripouille";

// 		/* 6 */ printf("%s\n",ft_strrchr(s, 't' + 256));
// 			/* 6 */ printf("%s\n",strrchr(s, 't' + 256));
// 	return 0;
// }
