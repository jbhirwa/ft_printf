/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhabaguh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:22:52 by jhabaguh          #+#    #+#             */
/*   Updated: 2021/10/01 15:22:52 by jhabaguh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*destin;
	size_t	n;

	source = (char *)src;
	destin = (char *)dst;
	n = 0;
	if (source < destin)
	{
		while (n++ <= len)
			destin[len - n] = source[len - n];
	}
	else
		while (len--)
			*(destin++) = *(source++);
	return (dst);
}
