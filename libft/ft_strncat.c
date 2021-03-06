/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:22:52 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:22:56 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *p_s1;

	p_s1 = s1;
	while (*p_s1)
		p_s1++;
	while (n-- > 0 && *s2)
		*p_s1++ = *s2++;
	*p_s1 = '\0';
	return (s1);
}
