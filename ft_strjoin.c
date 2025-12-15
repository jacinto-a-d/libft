/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:12:40 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/01 19:57:43 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	x;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i])
		i++;
	while (s2[x])
		x++;
	result = malloc(i + x + 1);
	if (result == NULL)
		return (NULL);
	x = -1;
	i = -1;
	while (s1[++x] != '\0')
		result[x] = s1[x];
	while (s2[++i] != '\0')
		result[x + i] = s2[i];
	result[i + x] = '\0';
	return (result);
}
