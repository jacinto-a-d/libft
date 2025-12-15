/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:16:09 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/01 20:00:00 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*b;
	unsigned char		*j;

	if (!dest && !src)
		return (NULL);
	j = dest;
	b = src;
	i = 0;
	while (i < n)
	{
		j[i] = b[i];
		i++;
	}
	return (dest);
}
