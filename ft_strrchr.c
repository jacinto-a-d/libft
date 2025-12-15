/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:12:24 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/02 17:12:55 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				a;
	int				b;
	unsigned char	x;

	x = (unsigned char)c;
	a = 0;
	b = -1;
	while (s[a])
	{
		if (s[a] == x)
			b = a;
		a++;
	}
	if (x == '\0')
		return ((char *)&s[a]);
	if (b != -1)
		return ((char *)&s[b]);
	return (NULL);
}
