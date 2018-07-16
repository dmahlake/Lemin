/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:21:36 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:21:54 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		bsize;
	size_t		d_len;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	bsize = size;
	while (*d != '\0' && bsize != 0)
	{
		d++;
		bsize--;
	}
	d_len = d - dst;
	bsize = size - d_len;
	if (bsize == 0)
		return (d_len + ft_strlen(s));
	while (*s != '\0' && bsize-- != 1)
		*d++ = *s++;
	d_len = d - dst;
	*d = '\0';
	return (d_len + ft_strlen(s));
}
