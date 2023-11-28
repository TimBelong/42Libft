/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:42:26 by ttulegal          #+#    #+#             */
/*   Updated: 2023/11/21 15:26:36 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	little_len = 0;
	while (little[little_len])
		little_len++;
	if (len < little_len)
		return (NULL);
	while (*big && len-- >= little_len)
	{
		i = 0;
		while (big[i] == little[i] && i < little_len)
			i++;
		if (i == little_len)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
