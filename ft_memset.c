/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poscenes <poscenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:17:17 by poscenes          #+#    #+#             */
/*   Updated: 2021/10/25 12:35:54 by poscenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	len;

	len = n;
	while (n > 0)
	{
		*((unsigned char *)s) = (unsigned char)c;
		s++;
		n--;
	}
	return (s - len);
}
