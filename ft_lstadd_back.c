/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:09:06 by inne              #+#    #+#             */
/*   Updated: 2023/11/14 19:10:48 by inne             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;

    if (!lst)
    {
        *lst = new;
        return ;
    }
    last = *lst;
    while (last->next)
        last = last->next;
    last->next = new;
}