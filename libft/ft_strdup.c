/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:19:48 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:19:52 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_s;
	size_t	cnt;
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	s = s - (len + 1);
	cnt = 0;
	dup_s = (char *)malloc(sizeof(*s) * (len + 1));
	if (!dup_s)
		return (NULL);
	while (*s)
	{
		*dup_s++ = *s++;
		cnt++;
	}
	*dup_s = '\0';
	dup_s = dup_s - cnt;
	return (dup_s);
}
