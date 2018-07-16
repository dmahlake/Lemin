/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 16:37:37 by dmahlake          #+#    #+#             */
/*   Updated: 2017/06/25 17:40:22 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*string_processor(char *str, char *str1)
{
	int		len;
	int		length;
	char	*answer;

	if (str)
		len = ft_strlen(str);
	else
		len = 0;
	length = ft_strlen(str1);
	answer = ft_strnew(len + length);
	if (answer)
	{
		if (str)
		{
			ft_strncpy(answer, str, len);
			ft_strdel(&str);
		}
		ft_strncpy(answer + len, str1, length);
	}
	return (answer);
}

int		iterate_line(char **buff, char **str)
{
	char	*occur;

	occur = ft_strchr(*buff, '\n');
	if (occur)
	{
		*str = ft_strsub(*buff, 0, occur - *buff);
		ft_strcpy(*buff, occur + 1);
		return (1);
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char *buff_str;
	char		buff[BUFF_SIZE + 1];
	int			sread;

	if (buff_str && iterate_line(&buff_str, line))
		return (1);
	while ((sread = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[sread] = '\0';
		buff_str = string_processor(buff_str, buff);
		if (iterate_line(&buff_str, line))
			return (1);
	}
	if (sread < 0)
		return (-1);
	if (buff_str && *buff_str)
	{
		*line = ft_strdup(buff_str);
		ft_strdel(&buff_str);
		return (1);
	}
	if (buff_str)
		ft_strdel(&buff_str);
	return (0);
}
