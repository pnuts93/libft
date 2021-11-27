/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:47:52 by pnuti             #+#    #+#             */
/*   Updated: 2021/07/27 17:11:29 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int n, int power)
{
	int	result;

	result = n;
	if (power == 0)
	{
		if (n != 0)
			return (1);
		else
			return (0);
	}
	else if (power == 1)
		return (n);
	else if (power > 1)
		result = result * ft_power(n, power - 1);
	return (result);
}
