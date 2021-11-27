/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 08:21:55 by pnuti             #+#    #+#             */
/*   Updated: 2021/05/29 11:03:28 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	arr = NULL;
	if (nmemb == 0 && size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	arr = (void *)malloc(nmemb * size);
	if (arr)
		ft_bzero(arr, nmemb * size);
	return (arr);
}
