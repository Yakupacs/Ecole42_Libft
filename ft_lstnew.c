/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:15 by yacis             #+#    #+#             */
/*   Updated: 2022/06/29 19:25:02 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*str;

	str = malloc(sizeof(t_list));
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
	t_list	*list2;
	char	tab[6] = "yakup";
	char	tab2[5] = "acis";

	list = ft_lstnew(tab);
	list2 = ft_lstnew(tab2);
	list->next = list2;
	printf("%s\n", list->content);
	printf("%p\n", list->next);
	printf("%s\n", list2->content);
	printf("%p\n", list2->next);
}
 */