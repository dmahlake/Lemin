/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:22:37 by dmahlake          #+#    #+#             */
/*   Updated: 2017/07/09 15:22:41 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p_s;
	char	*s_new;
	char	*p_s_new;
	size_t	n;

	if (!s || !f)
		return (NULL);
	n = 0;
	s_new = ft_strnew(ft_strlen(s));
	if (s_new != NULL)
	{
		p_s = (char *)s;
		p_s_new = s_new;
		while (*p_s)
		{
			*p_s_new++ = f(n, *p_s++);
			n++;
		}
	}
	return (s_new);
}
