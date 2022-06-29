/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:14 by yacis             #+#    #+#             */
/*   Updated: 2022/06/29 22:26:05 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;

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
/* 
void	*f(void *content)
{
	int i;
	char *str;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return ((void *)str);
}

void del(void *content)
{
	free(content);
}

int main(void)
{
	t_list	*lst;
	t_list	*lst2;

	lst = ft_lstnew(ft_strdup("HeLLoWoRLD"));
	lst2 = ft_lstnew(ft_strdup("SeLaMDuNYa"));
	lst->next = lst2;
	printf("%s\n", lst->content);
	printf("%s\n", lst2->content);
	ft_lstmap(lst, f, del);
	printf("%s\n", lst->content);
	printf("%s\n", lst2->content);
}  */