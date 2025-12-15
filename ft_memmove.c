/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:50:02 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/01 19:56:03 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*a;
	unsigned char		*b;

	if (!dest && !src)
		return (NULL);
	a = src;
	b = dest;
	if (b < a || b >= a + n)
	{
		while (n--)
			*b++ = *a++;
	}
	else
	{
		a = a + n - 1;
		b = b + n - 1;
		while (n--)
			*b-- = *a--;
	}
	return (dest);
}
