/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:11:34 by jabad-di          #+#    #+#             */
/*   Updated: 2025/12/02 17:13:01 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy(const char *s1, char *dst, size_t start, size_t end)
{
	size_t	x;

	x = 0;
	while (start <= end)
		dst[x++] = s1[start++];
	dst[x] = '\0';
}

static int	look_letter(char s, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == s)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mod;
	size_t	start;
	size_t	end;

	start = 0;
	end = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[end])
		end++;
	if (end == 0)
		return (ft_strdup(""));
	--end;
	while (s1[start] && look_letter(s1[start], set))
		start++;
	while (end >= start && look_letter(s1[end], set))
		end--;
	if (start > end)
		return (ft_strdup(""));
	mod = malloc((end - start) + 2);
	if (mod == NULL)
		return (NULL);
	ft_copy(s1, mod, start, end);
	return (mod);
}
