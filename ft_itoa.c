/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:03:57 by ttulegal          #+#    #+#             */
/*   Updated: 2023/11/13 17:18:12 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	digits;

	digits = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		digits += 1;
	while (number != 0)
	{
		number /= 10;
		digits++;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	unsigned int	digits;
	char			*string;

	digits = ft_number_size(n);
	string = (char *)malloc(sizeof(char) * (digits +1));
	if (string == NULL)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		string[0] = 0;
	string[digits] = '\0';
	while (number != 0)
	{
		string[digits -1] = (number % 10) + '0';
		number /= 10;
		digits--;
	}
	return (string);
}
