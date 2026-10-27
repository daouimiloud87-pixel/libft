/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:42:47 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/24 22:04:48 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	j = 0;
	dest_len = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	while (i < size && dest[i])
		i++;
	dest_len = i;
	if (dest_len == size)
		return (size + src_len);
	while (src[j] && dest_len + j + 1 < size)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	if (dest_len < size)
		dest[dest_len + j] = '\0';
	return (src_len + dest_len);
}
