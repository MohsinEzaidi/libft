#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tem;

	if (!lst || !new)
		return;
	if(!*lst)
	{
		*lst = new;
		return;
	}
	tem = *lst;
	while (tem->next)
	{
		tem = tem->next;
	}
	tem->next = new;
}