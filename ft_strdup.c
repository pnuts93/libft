/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 10:29:16 by pnuti             #+#    #+#             */
/*   Updated: 2021/05/24 22:17:37 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;
	size_t	len;

	len = ft_strlen(str) + 1;
	str2 = (char *)malloc(len * sizeof(*str));
	if (str2)
	{
		ft_memcpy(str2, str, len);
		return (str2);
	}
	return (NULL);
}
