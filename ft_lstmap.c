/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:09:17 by malhamel          #+#    #+#             */
/*   Updated: 2022/12/10 15:51:19 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*i;

	if (!lst)
		return (0);
	l = ft_lstnew(f(lst -> content));
	if (!l)
		return (0);
	i = l;
	lst = lst->next;
	while (lst)
	{
		l->next = ft_lstnew(f(lst -> content));
		if (!l->next)
		{
			ft_lstclear(&i, del);
			return (0);
		}
		l = l->next;
		lst = lst -> next;
	}
	l->next = NULL;
	return (i);
}
