/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 09:37:04 by pnuti             #+#    #+#             */
/*   Updated: 2021/05/26 11:15:36 by pnuti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	skip_del(char const *s, char c, size_t i)
{
	size_t	count;

	count = 0;
	while (s[i] == c)
	{
		i++;
		count++;
	}
	return (count);
}

static size_t	count_s(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s[0])
		return (0);
	if (s[0] == c)
		i += skip_del(s, c, i);
	while (s[i])
	{
		if (s[i] == c)
		{
			i += skip_del(s, c, i);
			count++;
		}
		else
			i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

static char	*get_token(char const *s, char c, size_t *i)
{
	size_t	count;
	char	*token;

	count = 0;
	token = 0;
	while (s[*i] != c && s[*i])
	{
		if (s[*i + 1] == c || s[*i + 1] == '\0')
		{
			token = (char *)malloc(sizeof(char) * (count + 2));
			ft_strlcpy(token, &s[*i - count], count + 2);
			*i += skip_del(s, c, *i + 1);
			return (token);
		}
		else
			(*i)++;
		count++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**rs;

	i = 0;
	j = 0;
	i += skip_del(s, c, i);
	rs = (char **)malloc(sizeof(char *) * ((count_s(s, c) + 1)));
	if (rs)
	{
		while (j < count_s(s, c))
		{
			rs[j] = get_token(s, c, &i);
			i++;
			j++;
		}
	}
	rs[j] = NULL;
	return (rs);
}
