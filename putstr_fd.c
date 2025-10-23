#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (fd == -1 || !s)
		return;
	len = (int) ft_strlen(s);
	write(fd, s, len);
}