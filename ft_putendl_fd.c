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
