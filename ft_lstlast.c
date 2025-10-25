#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	int size;

	if (!lst)
		return NULL;
	while (lst -> next != NULL)
		lst = lst -> next;
	return lst;
}
int main(int argc, char const *argv[])
{
	t_list *list = NULL;

	t_list *l1 = ft_lstnew("1");
	t_list *l2 = ft_lstnew("2");
	t_list *l3 = ft_lstnew("3");
	ft_lstadd_front(&list,l1);
	ft_lstadd_front(&list,l2);
	ft_lstadd_front(&list,l3);
	int len = ft_lstsize(list);
	printf("%s\n",ft_lstlast(list)->content);
	return 0;
}
