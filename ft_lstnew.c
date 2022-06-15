#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *str;

    str = (t_list *)malloc(sizeof(t_list));
    if (!str)
        return (NULL);
    str->content = (void *)content;
    str->next = NULL;
    return (str);
}