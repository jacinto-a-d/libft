/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:00:29 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/01 19:57:19 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	i_c;

	i_c = (char)c;
	while (*str != '\0')
	{
		if (*str == i_c)
			return ((char *)str);
		str++;
	}
	if (i_c == '\0')
		return ((char *)str);
	return (NULL);
}
