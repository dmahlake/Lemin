/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:14:21 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:14:25 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	unsigned char *p_dst;
	unsigned char *p_src;
	unsigned char uc;

	p_dst = (unsigned char*)dst;
	p_src = (unsigned char*)src;
	uc = (unsigned char)c;
	while (n-- > 0)
	{
		*p_dst = *p_src++;
		if (*p_dst++ == uc)
			return (p_dst);
	}
	return (NULL);
}
