/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:38:36 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/21 12:32:20 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		total;

	nb = n;
	total = len(nb);
	str = malloc((total + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[total] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		total--;
		str[total] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (n == 0)
		str[0] = '0';
	return (str);
}
