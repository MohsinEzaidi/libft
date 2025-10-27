/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:11:01 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/26 17:46:17 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tem;

	tem = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		tem[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
// int main() {
// 	char	x[5] = "hello";
// 	unsigned char *y = (unsigned char*) x;
// 	ft_memset(&x[0], '-', 1);
// 	ft_memset(&y[1], '1', 1);
// 	ft_memset(&y[2], '3', 2);
// 	ft_memset(&y[4], '7', 1);
//     printf("%s\n", x); // prints -1337
//     return 0;
// }