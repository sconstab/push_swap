/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayla <ayla@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:09:25 by sconstab          #+#    #+#             */
/*   Updated: 2019/09/17 12:40:46 by ayla             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t d;
	size_t s;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize <= d)
		return (s + dstsize);
	while (src[i] && i + d < dstsize - 1)
	{
		dst[i + d] = src[i];
		i++;
	}
	dst[i + d] = '\0';
	return (d + s);
}
