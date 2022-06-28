/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:05 by yacis             #+#    #+#             */
/*   Updated: 2022/06/28 15:13:02 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

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
/*
void	del(void *content)
{
		int	i;
		char *str;

		str = (char *)content;
		i = 0;
		while (str[i])
		{
			str[i] = 0;
			i++;
		}
}

int	main(void)
{
	t_list	*lst;
	t_list	*lst2;
	t_list	*lst3;

	lst = ft_lstnew("yakup");
	lst2 = ft_lstnew("ali");
	lst3 = ft_lstnew("mehmet");
	lst->next = lst2;
	lst2->next = lst3;
	printf("%s\n", lst->content);
	printf("%s\n", lst2->content);
	printf("%s\n", lst3->content);
	printf("a");
	ft_lstclear(&lst, del);
	printf("b");
	printf("%s\n", lst->content);
	printf("%s\n", lst2->content);
	printf("%s\n", lst3->content);
}
*/