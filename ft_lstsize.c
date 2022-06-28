/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:17 by yacis             #+#    #+#             */
/*   Updated: 2022/06/28 15:13:07 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main()
{
	t_list	*lst;
	t_list	*lst2;
	t_list	*lst3;

	lst = ft_lstnew("Ali");
	lst2 = ft_lstnew("Ata");
	lst3 = ft_lstnew("Bindi");
	lst->next = lst2;
	lst2->next = lst3;
	printf("%d", ft_lstsize(lst2));
}
*/