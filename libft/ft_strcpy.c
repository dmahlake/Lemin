/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:19:15 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:19:19 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char *p_dst;

	p_dst = dst;
	while (*src)
	{
		*p_dst++ = *src++;
	}
	*p_dst = *src;
	return (dst);
}
