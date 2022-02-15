/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poscenes <poscenes@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:00:16 by poscenes          #+#    #+#             */
/*   Updated: 2021/10/13 19:29:07 by poscenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*create_first(t_list **lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*crt;
	t_list	*lst_ex;

	lst_ex = *lst;
	crt = ft_lstnew(f(lst_ex->content));
	if (!crt)
	{
		ft_lstclear(lst, del);
		return (NULL);
	}
	return (crt);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_crtd;
	t_list	*elem_crtd;

	if (!lst || !f)
		return (NULL);
	elem_crtd = create_first(&lst, f, del);
	if (!elem_crtd)
		return (NULL);
	lst_crtd = elem_crtd;
	lst = lst->next;
	while (lst)
	{
		elem_crtd = ft_lstnew(f(lst->content));
		if (!elem_crtd)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&lst_crtd, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&lst_crtd, elem_crtd);
	}
	return (lst_crtd);
}
