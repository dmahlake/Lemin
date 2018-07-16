/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:24:35 by dmahlake          #+#    #+#             */
/*   Updated: 2017/09/19 11:40:37 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char *p_s1;
	char *p_s2;

	if (!s1 || !s2)
		return (0);
	p_s1 = (char *)s1;
	p_s2 = (char *)s2;
	while ((*p_s1 == *p_s2) && (*p_s1 && *p_s2) && n > 0)
	{
		p_s1++;
		p_s2++;
		n--;
	}
	if (!(*p_s1 && *p_s2) || (n == 0))
		return (1);
	return (0);
}
