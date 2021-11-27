/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 12:56:22 by pnuti             #+#    #+#             */
/*   Updated: 2021/05/24 14:24:28 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	uc;

	uc = c;
	if (c == '\0')
		return ((char *)(str + ft_strlen(str)));
	while (*str != '\0')
	{
		if (*str == uc)
			return ((char *)str);
		str++;
	}
	return (0);
}
