/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:14:48 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:14:51 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *p_str;

	p_str = (unsigned char*)str;
	while (n-- > 0)
	{
		if (*p_str == (unsigned char)c)
			return (p_str);
		p_str++;
	}
	return (NULL);
}
