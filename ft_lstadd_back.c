/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:23:57 by yacis             #+#    #+#             */
/*   Updated: 2022/06/23 21:28:43 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*liste;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	liste = *lst;
	while (liste-> next)
	{
		liste = liste -> next;
	}
	liste -> next = new;
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
    ft_lstadd_back(&lst, new);
    printf("%s\n", lst->content);
    printf("%x\n", lst->next);
    printf("%s\n", new->content);
    printf("%x", new->next);
}
*/