/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:00:59 by tde-roqu          #+#    #+#             */
/*   Updated: 2016/03/16 10:55:03 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ret;

	ret = (char*)s;
	i = 0;
	while (ret[i] != 0)
	{
		if (ret[i] == (char)c)
			return (ret + i);
		i++;
	}
	if (ret[i] == (char)c)
		return (ret + i);
	return (NULL);
}
