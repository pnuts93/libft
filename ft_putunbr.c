/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:31:34 by pnuti             #+#    #+#             */
/*   Updated: 2021/06/04 08:38:11 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr(unsigned int n)
{
	char	number;

	if (n <= 9)
	{
		number = n + '0';
		write(1, &number, 1);
	}
	else if (n > 9)
	{
		ft_putunbr(n / 10);
		ft_putunbr(n % 10);
	}
}
