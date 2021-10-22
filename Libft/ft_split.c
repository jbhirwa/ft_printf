/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhabaguh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:22:52 by jhabaguh          #+#    #+#             */
/*   Updated: 2021/10/04 15:38:50 by jhabaguh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_len(char const *s, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i++] && s[i] != c)
		len++;
	return (len);
}

size_t	ft_wordsets(char *str, char sep)
{
	size_t	result;
	size_t	i;

	result = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
			result++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (result);
}

static char	*ft_allonewstr(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	current;
	size_t	a;
	size_t	b;

	split = malloc(sizeof(char *) * (ft_wordsets((char *)s, c) + 1));
	if (!split || !s)
		return (NULL);
	current = -1;
	b = 0;
	while (++current < ft_wordsets((char *)s, c))
	{
		a = 0;
		split[current] = ft_allonewstr(word_len(&s[b], c) + 1);
		if (!split)
			split[current] = NULL;
		while (s[b] == c)
			b++;
		while (s[b] && s[b] != c)
			split[current][a++] = s[b++];
		split[current][a++] = '\0';
	}
	split[current] = 0;
	return (split);
}
