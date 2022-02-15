/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poscenes <poscenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:26:47 by poscenes          #+#    #+#             */
/*   Updated: 2021/10/22 21:54:53 by poscenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	size;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	i = size;
	while (size && ft_strchr(set, s1[size]))
		size--;
	res = malloc((size + 2) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (*s1 && size + 1 != 0)
	{
		res[i] = *s1++;
		i++;
		size--;
	}
	res[i] = '\0';
	return (res);
}
