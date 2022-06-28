/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:15 by yacis             #+#    #+#             */
/*   Updated: 2022/06/27 20:20:33 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*str;

	str = (t_list *)malloc(sizeof(t_list));
	if (!str)
		return (NULL);
	str->content = content;
	str->next = NULL;
	return (str);
}

/*
int main()
{
	t_list	*list;
	int	tab[2] = {13, 21};
	int	*tab2;

	list = ft_lstnew(tab);
	tab2 = list->content;
	printf("%d\n", *(tab2));
	printf("%d\n", *(tab2 + 1));
	printf("%p", list->next);
}
*/