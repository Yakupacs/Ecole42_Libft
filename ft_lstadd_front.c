/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:03 by yacis             #+#    #+#             */
/*   Updated: 2022/06/23 00:24:05 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    if (!lst)
    {
        *lst = new;
        return ;
    }
    new->next = *lst;
    *lst = new;
}
/*
int main(void)
{
	t_list *lst = ft_lstnew(ft_strdup("yakup"));     
	t_list *new = ft_lstnew(ft_strdup("acis"));
    printf("%s\n", lst->content);
    printf("%x\n", lst->next);
    printf("%s\n", new->content);
    printf("%x\n\n", new->next);
    ft_lstadd_front(&lst, new);
    printf("%s\n", lst->content);
    printf("%x\n", lst->next);
    printf("%s\n", new->content);
    printf("%x", new->next);
}
*/