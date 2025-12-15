/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:12:01 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/01 19:57:59 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize > 0)
	{
		while (i < destsize - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		if (destsize != 0)
			dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
