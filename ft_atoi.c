/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:13:09 by pnuti             #+#    #+#             */
/*   Updated: 2021/07/18 16:53:37 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\r'
		|| c == '\f')
		return (1);
	else
		return (0);
}

static int	is_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	else
		return (0);
}

static int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (is_space(*str))
		str++;
	if (is_sign(*str))
		sign = 1 - 2 * (*str++ == '-');
	while (is_num(*str))
	{
		if (result > 2147483647 / 10
			|| (result == 2147483647 && *str - '0' > 7))
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		result = (result * 10) + (*str - '0');
		str++;
	}
	result = result * sign;
	return (result);
}
