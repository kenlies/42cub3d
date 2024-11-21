#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	t = *lst;
	if (!lst)
		return ;
	if (!t)
		*lst = new;
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = new;
	}
}
