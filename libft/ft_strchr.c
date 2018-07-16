/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:18:31 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:18:34 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	char			*p_s;

	p_s = (char *)s;
	uc = (unsigned char)c;
	while (*p_s)
	{
		if (*p_s == uc)
			return (p_s);
		p_s++;
	}
	if (*p_s == uc)
		return (p_s);
	return (NULL);
}
