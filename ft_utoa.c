/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 08:06:20 by pnuti             #+#    #+#             */
/*   Updated: 2021/06/10 15:24:17 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(unsigned int n)
{
	size_t	i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int n)
{
	size_t	digits;
	char	*a;

	digits = get_digits(n);
	a = (char *)malloc(sizeof(char) * (digits + 1));
	a[digits] = '\0';
	while (digits--)
	{
		if (digits == 0)
			a[digits] = n + '0';
		else
		{
			a[digits] = (n % 10) + '0';
			n = n / 10;
		}
	}
	return (a);
}
