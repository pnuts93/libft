/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 18:07:28 by pnuti             #+#    #+#             */
/*   Updated: 2021/05/28 14:45:09 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	const char		*s;
	unsigned char	uc;
	size_t			i;

	d = (unsigned char *)dest;
	s = (const char *)src;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == uc)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
