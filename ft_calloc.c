/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:01:29 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/01 19:50:36 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*byt;
	size_t	n;
	size_t	max;

	max = 0;
	if (size != 0 && nmemb > ((size_t) -1) / size)
		return (NULL);
	max = nmemb * size;
	if (max == 0)
		return (malloc(0));
	byt = (char *) malloc(max);
	if (!byt)
		return (NULL);
	n = 0;
	while (n < max)
	{
		byt[n] = 0;
		n++;
	}
	return ((void *) byt);
}
