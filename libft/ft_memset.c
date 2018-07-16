/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:15:54 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:15:57 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *d, int c, size_t len)
{
	unsigned char *p_d;
	unsigned char uc;

	p_d = (unsigned char*)d;
	uc = (unsigned char)c;
	while (len-- > 0)
		*p_d++ = uc;
	return (d);
}
