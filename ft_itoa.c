/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 08:06:20 by pnuti             #+#    #+#             */
/*   Updated: 2021/05/25 21:40:54 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_sign(int n)
{
	if (n >= 0)
		return (1);
	else
		return (-1);
}

static size_t	get_digits(int n)
{
	size_t	i;

	if (get_sign(n) >= 0)
		i = 1;
	else
		i = 2;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	digits;
	char	*a;
	int		sign;

	sign = get_sign(n);
	digits = get_digits(n);
	a = (char *)malloc(sizeof(char) * (digits + 1));
	a[digits] = '\0';
	while (digits--)
	{
		if ((digits == 0 && sign == 1) || (digits == 1 && sign == -1))
			a[digits] = (n * sign) + '0';
		else if (digits == 0 && sign == -1)
			a[digits] = '-';
		else
		{
			a[digits] = (n % 10) * sign + '0';
			n = n / 10;
		}
	}
	return (a);
}
