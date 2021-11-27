/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subtilzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 22:06:04 by pnuti             #+#    #+#             */
/*   Updated: 2021/06/09 22:14:44 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_subtilzero(int min, int sub)
{
	unsigned int	dif;

	if (min > sub)
		dif = min - sub;
	else
		dif = 0;
	return (dif);
}
