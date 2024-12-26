#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*current;

	if(!lst || !f || !del)
		return(NULL);
	
	while(lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if(!new_node)
		{
			ft_lstclear(&new_lst, del);
			return(NULL);
		}
		if(!new_lst)
			{
				new_lst = new_node;
			}
		else
		{
			current->next = new_node;
		}
		current = new_node;
		lst = lst->next;
	}
	return(new_lst);
}
