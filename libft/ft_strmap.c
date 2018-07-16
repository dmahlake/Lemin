/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:22:22 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:22:28 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *s_new;
	char *p_s_new;
	char *p_s;

	if (!s || !f)
		return (NULL);
	s_new = (char *)ft_strnew(ft_strlen(s));
	if (s_new != NULL)
	{
		p_s = (char *)s;
		p_s_new = s_new;
		while (*p_s)
			*p_s_new++ = f(*p_s++);
		*p_s_new = '\0';
	}
	return (s_new);
}
