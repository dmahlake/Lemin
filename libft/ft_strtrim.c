/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:26:22 by dmahlake          #+#    #+#             */
/*   Updated: 2017/08/11 15:21:35 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		ft_strbegin(const char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	return (i);
}

static size_t		ft_strlast(const char *s, int start)
{
	int i;

	if (s == NULL)
		return (0);
	i = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && (i > start))
		i--;
	i++;
	return (i);
}

char				*ft_strtrim(char const *s)
{
	int		last;
	int		start;
	char	*p;

	if (!s)
		return (NULL);
	start = ft_strbegin(s);
	last = ft_strlast(s, start);
	if (!s)
		return (NULL);
	p = ft_strsub(s, (const char)start, (last - start));
	if (!s)
		return (NULL);
	return (p);
}
