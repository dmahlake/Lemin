/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmahlake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:18:55 by dmahlake          #+#    #+#             */
/*   Updated: 2017/09/29 14:15:13 by dmahlake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*new;

	new = f(lst);
	first = new;
	while (lst->next != NULL)
	{
		new->next = f(lst->next);
		new = new->next;
		lst = lst->next;
	}
	return (first);
}
