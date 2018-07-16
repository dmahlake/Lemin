/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:15:38 by dmahlake          #+#    #+#             */
/*   Updated: 2017/09/20 12:27:07 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*p_src;
	char	*p_dst;

	p_src = (char *)src;
	p_dst = (char *)dst;
	if (p_src == p_dst)
	{
		return (dst);
	}
	else if (p_src > p_dst)
	{
		while (n-- > 0)
			*p_dst++ = *p_src++;
	}
	else if (p_src < p_dst)
	{
		while (n-- > 0)
		{
			p_dst[n] = p_src[n];
		}
	}
	return (dst);
}
