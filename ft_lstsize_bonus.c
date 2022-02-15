/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poscenes <poscenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:22:37 by poscenes          #+#    #+#             */
/*   Updated: 2021/10/13 21:50:30 by poscenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;
	t_list	*elem;

	cnt = 0;
	if (lst)
	{
		cnt++;
		elem = lst;
		while (elem->next)
		{
			cnt++;
			elem = elem->next;
		}
	}
	return (cnt);
}
