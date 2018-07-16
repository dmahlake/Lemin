/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:20:09 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:20:13 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char *p_s1;
	char *p_s2;

	if (!s1 || !s2)
		return (0);
	p_s1 = (char *)s1;
	p_s2 = (char *)s2;
	while ((*p_s1 == *p_s2) && *p_s1 && *p_s2)
	{
		p_s1++;
		p_s2++;
	}
	if (!*p_s1 && !*p_s2)
		return (1);
	return (0);
}
