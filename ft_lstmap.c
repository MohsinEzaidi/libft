#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *new_list;
	t_list *tem;

	if (!lst || !f || !del)
		return NULL;
	new_list = NULL;
	while (lst)
	{
		tem = ft_lstnew(f(lst->content));
		if (!tem)
		{
			ft_lstclear(new_list,del);
			return NULL;
		}
		ft_lstadd_back(&new_list,tem);
		lst = lst->next;
	}
	return new_list;
}