/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:33:14 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/01 19:57:26 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*second;
	int		i;

	i = 0;
	while (s[i])
		i++;
	second = malloc(i + 1);
	if (second == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		second[i] = s[i];
		i++;
	}
	second[i] = '\0';
	return (second);
}
