/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcreturn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayla <ayla@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:53:54 by sconstab          #+#    #+#             */
/*   Updated: 2019/09/17 12:40:46 by ayla             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcreturn(char const *s, char c, size_t x)
{
	char	*ns;
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	j = 0;
	n = 0;
	ns = ft_strnew(ft_strcnlen(s, c, x));
	if (s[i] != c)
		j++;
	while (s[i] && j <= x)
		if (s[i] == c && s[i])
		{
			while (s[i] == c && s[i])
				i++;
			if (s[i])
				j++;
		}
		else
			while (s[i] != c && s[i])
				i++;
	while (s[i] != c && s[i])
		ns[n++] = s[i++];
	return (ns);
}
