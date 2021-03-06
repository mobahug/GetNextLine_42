/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:55:57 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/16 13:00:13 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	if (*s == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
