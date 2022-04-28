/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:47:08 by gnameles          #+#    #+#             */
/*   Updated: 2021/10/27 12:47:09 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_strs(char const *s, char c)
{
	size_t		count;
	size_t		i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			++i;
		while (s[i] != c && s[i] != '\0')
			++i;
		if (*(s + i - 1) != c)
			count++;
	}
	return (count);
}

static void	ft_fill_matrix(char const *s, char c, size_t strs, char **result)
{
	size_t	count;
	size_t	i;
	int		word_len;

	i = 0;
	count = 0;
	while (count < strs)
	{
		word_len = 0;
		while (s[i] == c && s[i] != '\0')
			++i;
		while (s[i + word_len] != c && s[i + word_len] != '\0')
			word_len++;
		result[count] = ft_substr(s, i, word_len);
		i += word_len;
		count++;
	}
	result[count] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	strs;

	result = NULL;
	if (!s)
		return (NULL);
	strs = ft_count_strs(s, c);
	result = (char **)malloc(sizeof(char *) * (strs + 1));
	if (!result)
		return (NULL);
	ft_fill_matrix(s, c, strs, result);
	return (result);
}
