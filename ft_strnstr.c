/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:22:53 by pnuti             #+#    #+#             */
/*   Updated: 2021/06/02 18:55:30 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	size_t	j;

	if (*small == '\0' || small == big)
		return ((char *)big);
	i = 0;
	while (i < n && big[i])
	{
		j = 0;
		while (big[i + j] == small[j] && small[j] && (i + j) < n && big[i + j])
		{
			j++;
			if (small[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
