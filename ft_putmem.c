/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:43:33 by pnuti             #+#    #+#             */
/*   Updated: 2021/06/03 10:59:12 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putdig(long long addr, int i)
{
	char	*hbase;

	hbase = "0123456789abcdef";
	if (!addr)
	{
		if (i > 0)
			ft_putstr_fd("0x", 1);
		else
			ft_putstr_fd("(nil)", 1);
		return ;
	}
	putdig(addr >> 4, i + 1);
	ft_putchar_fd(hbase[addr % 16], 1);
}

void	ft_putmem(void *addr)
{
	putdig((long long)addr, 0);
}
