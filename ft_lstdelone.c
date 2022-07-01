/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:07 by yacis             #+#    #+#             */
/*   Updated: 2022/06/30 15:46:39 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* void del(void *content)
{
	free(content);
}

int	main()
{
	t_list	*lst;
	t_list	*lst2;
	char	*str;
	char	*str2 = "helloworld";
	int		i = 0;
	
	str = malloc(sizeof(char) * ft_strlen(str2) + 1);
	while (str2[i])
	{
		str[i] = str2[i];
		i++;
	}
	lst = malloc(sizeof(t_list));
	lst->content = (void *)str;
	lst->next = NULL;
	lst2 = ft_lstnew(ft_strdup("selamdunya"));
	lst->next = lst2;
	printf("%s\n", (char *)lst->content);
	printf("%p\n", (char *)lst->next);
	ft_lstdelone(lst, del);
	printf("%s\n", (char *)lst->content);
	printf("%p\n", (char *)lst->next);
} */