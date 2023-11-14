/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inne <inne@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:05:28 by inne              #+#    #+#             */
/*   Updated: 2023/11/14 19:08:27 by inne             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list  *tmp;

    if (!lst)
        return (NULL);
    tmp = lst;
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    return (tmp);
}