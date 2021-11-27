/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 11:53:41 by pnuti             #+#    #+#             */
/*   Updated: 2021/05/25 08:23:58 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sj;
	size_t	slen1;
	size_t	slen2;

	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	sj = (char *)malloc((slen1 + slen2 + 1) * sizeof(*s1));
	if (sj)
	{
		ft_strlcpy(sj, s1, slen1 + 1);
		ft_strlcat(sj, s2, slen1 + slen2 + 1);
	}
	return (sj);
}
