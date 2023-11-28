/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:50:10 by ttulegal          #+#    #+#             */
/*   Updated: 2023/11/21 15:25:50 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		unc;
	const unsigned char	*src;

	src = s;
	unc = c;
	while (n > 0)
	{
		if (*src == unc)
			return ((void *)src);
		src++;
		n--;
	}
	return (NULL);
}
