/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_replace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayla <ayla@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 09:57:41 by sconstab          #+#    #+#             */
/*   Updated: 2019/09/17 12:40:46 by ayla             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_find_replace(char *str, char f, char r)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == f)
		{
			str[i] = r;
			return (1);
		}
		i++;
	}
	return (0);
}
