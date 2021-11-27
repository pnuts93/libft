/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:23:00 by pnuti             #+#    #+#             */
/*   Updated: 2021/05/30 12:18:39 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_l(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] && set[j])
	{
		if (s[i] != set[j])
			j++;
		else if (s[i] == set[j])
		{
			count++;
			i++;
			j = 0;
		}
	}
	return (count);
}

static size_t	check_r(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = ft_strlen(s);
	j = 0;
	count = 0;
	while (i > 0 && set[j])
	{
		if (s[i - 1] != set[j])
			j++;
		else if (s[i - 1] == set[j])
		{
			count++;
			i--;
			j = 0;
		}
	}
	return (count);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*ts;
	size_t	left;
	size_t	right;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	left = check_l(s, set);
	right = check_r(s, set);
	ts = (char *)malloc((len + 1) * sizeof(char));
	if (ts == NULL)
		return (NULL);
	i = 0;
	while (left < len - right && s[left])
	{
		ts[i] = s[left];
		left++;
		i++;
	}
	ts[i] = '\0';
	return (ts);
}
