/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 08:46:27 by pnuti             #+#    #+#             */
/*   Updated: 2021/05/24 22:15:29 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	uc;

	s = (unsigned char *)str;
	uc = (unsigned char)c;
	while (n > 0)
	{
		if (*s == uc)
			return (s);
		s++;
		n--;
	}
	return (NULL);
}
