/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:24:08 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:24:12 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *p_dst;

	p_dst = dst;
	while (len-- > 0)
	{
		if (*src != '\0')
			*p_dst++ = *src++;
		else
			*p_dst++ = '\0';
	}
	return (dst);
}
