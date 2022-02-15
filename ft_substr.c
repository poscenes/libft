/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poscenes <poscenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:06:40 by poscenes          #+#    #+#             */
/*   Updated: 2021/10/13 20:08:10 by poscenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	l;
	size_t	n;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (l < len)
		len = l;
	str = malloc(sizeof(char) * (len + 1));
	if (start > l)
		len = 0;
	if (str == NULL)
		return (NULL);
	n = 0;
	while (s[start + n] && n < len)
	{
		str[n] = s[n + start];
		n++;
	}
	str[n] = '\0';
	return (str);
}
