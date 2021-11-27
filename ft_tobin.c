/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tobin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:57:43 by pnuti             #+#    #+#             */
/*   Updated: 2021/06/04 09:07:51 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	to_neg(char *bin)
{
	size_t	i;
	int		check;

	i = 0;
	check = 1;
	while (bin[i] != '\0')
	{
		if (bin[i] == '1')
			bin[i] = '0';
		else
			bin[i] = '1';
		i++;
	}
	i--;
	while (i && check == 1)
	{
		if (bin[i] == '0')
		{
			bin[i] = '1';
			check *= 0;
		}
		else
			bin[i] = '0';
		i--;
	}
}

char	*ft_tobin(int n)
{
	char	*bin;
	int		i;
	int		sign;
	long	tmp;

	i = 1;
	sign = 1 - 2 * (n < 0);
	tmp = n * sign;
	bin = (char *)malloc((33) * sizeof(char));
	bin[32] = '\0';
	bin[0] = '0';
	while (i < 32)
	{
		if (tmp >= ft_power(2, 31 - i))
		{
			bin[i] = '1';
			tmp -= ft_power(2, 31 - i);
		}
		else
			bin[i] = '0';
		i++;
	}
	if (sign == -1)
		to_neg(bin);
	return (bin);
}
