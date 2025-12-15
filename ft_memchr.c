/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:57:33 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/01 19:59:51 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	x;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)s;
	x = (unsigned char)c;
	while (i < n)
	{
		if (s1[i] == x)
			return ((void *)&s1[i]);
		i++;
	}
	return (NULL);
}
