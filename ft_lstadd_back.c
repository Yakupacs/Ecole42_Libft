#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (!new)
        return ;
    if (!lst)
    {
        *lst = new;
        return ;
    }
    last = ft_lstlast(*lst);
    last->next = new;
}

// int main(void)
// {
//     t_list *lst = ft_lstnew(ft_strdup("yakup"));
//     t_list *new = ft_lstnew(ft_strdup("acis"));
//     printf("%s\n", lst->content);
//     printf("%x\n", lst->next);
//     printf("%s\n", new->content);
//     printf("%x\n\n", new->next);
//     ft_lstadd_back(&lst, new);
//     printf("%s\n", lst->content);
//     printf("%x\n", lst->next);
//     printf("%s\n", new->content);
//     printf("%x", new->next);
// }