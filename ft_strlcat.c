/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poscenes <poscenes@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:04:36 by poscenes          #+#    #+#             */
/*   Updated: 2021/10/13 19:29:08 by poscenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ssize;
	size_t	dsize;

	dsize = ft_strlen(dst);
	ssize = ft_strlen(src);
	i = 0;
	j = dsize;
	if (dstsize > 0 && dsize < dstsize - 1)
	{
		while (src[i] && dsize + i < dstsize - 1)
		{
			dst[i + j] = src[i];
			i++;
		}
		dst[i + j] = '\0';
	}
	if (dsize > dstsize)
		dsize = dstsize;
	return (dsize + ssize);
}
