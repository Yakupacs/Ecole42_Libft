/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:15 by yacis             #+#    #+#             */
/*   Updated: 2022/06/23 00:24:17 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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