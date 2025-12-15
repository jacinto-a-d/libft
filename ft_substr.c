/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:24:27 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/02 17:13:09 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if ((start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	temp = malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, &s[start], len + 1);
	return (temp);
}
