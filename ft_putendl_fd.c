/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 00:05:53 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/27 00:05:54 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	if (fd < 0 || !s)
		return ;
	len = (int) ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
