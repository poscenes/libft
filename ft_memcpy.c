/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poscenes <poscenes@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:17:17 by poscenes          #+#    #+#             */
/*   Updated: 2021/10/13 19:29:07 by poscenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char	*ptr;

	ptr = s1;
	if (!s1 && !s2)
		return (NULL);
	while (n > 0)
	{
		*(char *)s1 = *(char *)s2;
		++s1;
		++s2;
		--n;
	}
	return (ptr);
}
