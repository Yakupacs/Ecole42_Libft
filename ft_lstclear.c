#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *tmp;

    if (!del)
        return ;
    while (*lst != NULL)
    {
        del((*lst)->content);
        tmp = *lst;
        *lst = tmp->next;
        free(tmp);
    }
}