/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:52:59 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/01 19:55:39 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			x;

	x = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (x < n)
	{
		if (a[x] != b[x])
			return (a[x] - b[x]);
		x++;
	}
	return (0);
}
