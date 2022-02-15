/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poscenes <poscenes@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:30:01 by poscenes          #+#    #+#             */
/*   Updated: 2021/10/13 19:29:08 by poscenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;

	s1 = (void *)0;
	while (*s)
	{
		if (*s == (char)c)
			s1 = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (s1);
}
