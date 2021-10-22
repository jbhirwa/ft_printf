/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhabaguh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:22:52 by jhabaguh          #+#    #+#             */
/*   Updated: 2021/10/01 15:22:52 by jhabaguh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destin;
	char	*source;

	destin = (char *)dst;
	source = (char *)src;
	if (!dst && !src)
		return (dst);
	while (n-- > 0)
		*(destin++) = *(source++);
	return (dst);
}
