/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 11:00:15 by pnuti             #+#    #+#             */
/*   Updated: 2021/05/30 10:57:53 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen((char *)s);
	subs = NULL;
	subs = (char *)ft_calloc((len + 1), sizeof(char));
	if ((size_t)start > slen || s[start] == '\0' || subs == NULL)
		return (subs);
	while (i < len && start < slen)
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	return (subs);
}
