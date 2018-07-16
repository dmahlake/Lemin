/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:25:20 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:25:24 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*p_s;
	unsigned char	uc;

	uc = (unsigned char)c;
	p_s = NULL;
	while (*s)
	{
		if (*s == uc)
			p_s = (char *)s;
		s++;
	}
	if (uc == '\0')
		p_s = (char *)s;
	return (p_s);
}
