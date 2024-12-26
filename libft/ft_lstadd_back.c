#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*final;

	if(!new)
		return;
	if(!*lst)
	{
		*lst = new;
		return;
	}
	final = ft_lstlast(*lst);
	final->next = new;
}
