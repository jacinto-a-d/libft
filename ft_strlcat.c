/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:21:14 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/01 19:57:50 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	j;

	src_len = 0;
	dest_len = 0;
	j = 0;
	while (src[src_len])
		src_len++;
	if (destsize == 0)
		return (src_len);
	while (dest_len < destsize && dest[dest_len] != '\0')
		dest_len++;
	if (dest_len == destsize)
		return (destsize + src_len);
	while (src[j] && (dest_len + j) < (destsize - 1))
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}
