/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 22:00:33 by pnuti             #+#    #+#             */
/*   Updated: 2021/06/04 09:08:07 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	itox(int n)
{
	char	*base;

	base = "0123456789abcdef";
	return (base[n]);
}

char	*ft_tohex(int n)
{
	int		i;
	int		k;
	char	*bin;
	char	*hex;
	int		tmp;

	i = 0;
	k = 0;
	bin = ft_tobin(n);
	hex = (char *)malloc(9 * sizeof(char));
	hex[8] = '\0';
	while (i < 32 && hex)
	{
		tmp = ft_power(2, 3) * ((int)(bin[i] - '0'));
		i++;
		while (i % 4 != 0)
		{
			tmp += ft_power(2, 3 - i % 4) * ((int)(bin[i] - '0'));
			i++;
		}
		hex[k] = itox(tmp);
		k++;
	}
	free(bin);
	return (hex);
}
