/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:03 by yacis             #+#    #+#             */
/*   Updated: 2022/06/28 20:18:22 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
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
int	main(void)
{
	t_list *lst = ft_lstnew("yakup");
	t_list *new = ft_lstnew("acis");1 
	printf("%s\n", lst->content);
	printf("%p\n", lst->next);
	printf("%s\n", new->content);
	printf("%p\n\n", new->next);
	ft_lstadd_front(&lst, new);
	printf("%s\n", lst->content);
	printf("%p\n", lst->next);
	printf("%s\n", new->content);
	printf("%p\n", new->next);
}
*/