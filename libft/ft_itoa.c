/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 12:18:30 by dmahlake          #+#    #+#             */
/*   Updated: 2017/09/29 14:13:00 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_len(int num)
{
	int		len;

	len = 0;
	if (num < 0)
	{
		len++;
		num = -num;
	}
	len++;
	num = num / 10;
	while (num)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char			*ft_itoa(int nbr)
{
	int		len;
	char	*arr;
	long	num;

	num = (long)nbr;
	len = ft_len(num);
	if (!(arr = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	arr[len] = '\0';
	if (num < 0)
	{
		num = -num;
		arr[0] = '-';
	}
	arr[--len] = (num % 10) + 48;
	num = num / 10;
	while (num)
	{
		arr[--len] = (num % 10) + 48;
		num = num / 10;
	}
	return (arr);
}
