/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhabaguh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:22:53 by jhabaguh          #+#    #+#             */
/*   Updated: 2021/10/04 15:40:20 by jhabaguh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy( char *dst, const char *src, size_t destsize)
{
	unsigned int	i;
	unsigned int	j;

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	j = ft_strlen((char *)src);
	if (destsize == 0)
		return (j);
	while ((i < (destsize - 1)) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
