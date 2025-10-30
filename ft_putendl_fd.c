/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 00:05:53 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/29 19:59:06 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	if (write(fd, NULL, 0) == -1 || !s)
		return ;
	len = (int) ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
