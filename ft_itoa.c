/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poscenes <poscenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:06:54 by poscenes          #+#    #+#             */
/*   Updated: 2021/10/22 22:45:15 by poscenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*check(int n, char **res)
{
	if (n == -2147483648)
	{
		*res = ft_strdup("-2147483648");
		return (*res);
	}
	if (n == 0)
	{
		*res = ft_strdup("0");
		return (*res);
	}
	if (*res == NULL)
		return (NULL);
	return (NULL);
}

static	int	num_len(int n)
{
	int	res;

	res = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		res++;
	while (n != 0)
	{
		res++;
		n /= 10;
	}
	return (res);
}

static	char	*reverse(char *s)
{
	char	tmp;
	char	*src;
	char	*dst;
	size_t	j;

	if (s)
	{	
		j = ft_strlen(s);
		src = s;
		dst = s + j - 1;
		while (src < dst)
		{
			tmp = *src;
			*src++ = *dst;
			*dst-- = tmp;
		}
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		sign;

	if (n == -2147483648 || n == 0)
		return (check(n, &res));
	res = malloc(sizeof(char) * (num_len(n) + 1));
	if (res == NULL)
		return (check(n, &res));
	sign = 1;
	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	i = 0;
	while (n)
	{
		res[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (sign < 0)
		res[i++] = '-';
	res[i] = '\0';
	return (reverse(res));
}
