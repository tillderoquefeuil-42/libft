/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 16:46:33 by tde-roqu          #+#    #+#             */
/*   Updated: 2016/03/11 15:25:15 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*minint(char *nbr)
{
	ft_strcpy(nbr, "-2147483648");
	return (nbr);
}

static char	*calc(int n, int i, char *nbr)
{
	int				ret;
	unsigned int	div;

	ret = 0;
	div = 1;
	while (n / div > 9)
		div = div * 10;
	while (div >= 1)
	{
		ret = n / div;
		n = n % div;
		nbr[i] = ret + 48;
		div = div / 10;
		i++;
	}
	nbr[i] = 0;
	return (nbr);
}

static int	ft_nbrsize(int n)
{
	unsigned int	i;
	unsigned int	nb;
	int				c;

	i = 1;
	c = 0;
	if (n <= 0)
	{
		c++;
		n = -n;
	}
	nb = n;
	while (i <= nb)
	{
		i = i * 10;
		c++;
	}
	return (c);
}

char		*ft_itoa(int n)
{
	char	*nbr;
	int		i;

	nbr = ft_strnew(ft_nbrsize(n));
	if (nbr == NULL)
		return (NULL);
	if (n == -2147483648)
		return (minint(nbr));
	i = 0;
	if (n < 0)
	{
		n = -n;
		nbr[i] = '-';
		i++;
	}
	return (calc(n, i, nbr));
}
