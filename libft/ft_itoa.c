/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:50:41 by acamaras          #+#    #+#             */
/*   Updated: 2021/11/18 14:44:21 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	nb_len(long nb)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*helper( char *str, int i, long nb)
{
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		i++;
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * (-1);
	}
	while (nb > 0)
	{
		str[i--] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	nb = n;
	i = nb_len(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	return (helper(str, i, nb));
}
