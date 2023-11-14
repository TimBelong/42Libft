/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inne <inne@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:03:22 by inne              #+#    #+#             */
/*   Updated: 2023/11/14 19:05:12 by inne             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list  *temp;
    int     count;

    count = 0;
    temp = lst;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return (count);
}