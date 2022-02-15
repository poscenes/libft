/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poscenes <poscenes@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:17:17 by poscenes          #+#    #+#             */
/*   Updated: 2021/10/13 19:29:07 by poscenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (!s1 && !s2)
		return (NULL);
	if (s1 > s2)
		while (n-- > 0)
			((unsigned char *)s1)[n] = ((unsigned char *)s2)[n];
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
			++i;
		}
	}
	return (s1);
}
