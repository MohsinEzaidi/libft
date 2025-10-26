#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *list;
	t_list *tem;
	if (!lst || !del)
		return;
	list = *lst;
	while (list)
	{
		del(list->content);
		tem = list->next;
		free(list);
		list = tem;
	}
	*lst == NULL;
}