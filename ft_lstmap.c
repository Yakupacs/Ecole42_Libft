#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *result;
    t_list  *node;

    result = 0;
    while (lst)
    {
        node = ft_lstnew(f(lst->content));
        if (!node)
        {
            ft_lstclear(&result, del);
            return (0);
        }
        ft_lstadd_back(&result, node);
        lst = lst->next;
    }
    return (result);
}