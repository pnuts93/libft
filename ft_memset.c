/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 15:22:17 by pnuti             #+#    #+#             */
/*   Updated: 2021/05/24 21:41:39 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	char			*s;
	unsigned char	uc;

	s = (char *)str;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		s[i] = uc;
		i++;
	}
	return (s);
}
