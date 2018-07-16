/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:15:02 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:15:06 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p_s1;
	unsigned char *p_s2;

	if (n == 0)
		return (0);
	p_s1 = (unsigned char*)s1;
	p_s2 = (unsigned char*)s2;
	while ((*p_s1 == *p_s2) && n-- > 1)
	{
		p_s1++;
		p_s2++;
	}
	return (*p_s1 - *p_s2);
}
