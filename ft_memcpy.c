/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:34:46 by tde-roqu          #+#    #+#             */
/*   Updated: 2016/03/11 15:32:58 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*ssrc;
	char		*sdst;
	size_t		i;

	i = 0;
	ssrc = src;
	sdst = dst;
	while (i < n)
	{
		sdst[i] = ssrc[i];
		i++;
	}
	return (dst);
}
