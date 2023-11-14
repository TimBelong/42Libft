/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inne <inne@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:34:04 by inne              #+#    #+#             */
/*   Updated: 2023/11/14 19:36:28 by inne             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *tmp;

    while (*lst)
    {
        tmp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = tmp;
    }
}
