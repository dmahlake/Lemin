/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:15:14 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:15:17 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *p_dst;
	char *p_src;

	p_dst = (char *)dst;
	p_src = (char *)src;
	while (n-- > 0)
	{
		*p_dst++ = *p_src++;
	}
	return (dst);
}
