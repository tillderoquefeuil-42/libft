/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 10:45:20 by tde-roqu          #+#    #+#             */
/*   Updated: 2016/03/11 15:18:12 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	int		i;

	i = 0;
	mem = (char*)malloc(sizeof(char) * size);
	if (mem == NULL)
		return (NULL);
	while (mem[i])
	{
		mem[i] = 0;
		i++;
	}
	return ((void*)mem);
}
