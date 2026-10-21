/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:33:02 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/13 17:21:59 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest, const void *src,size_t n)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s;
    
    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    i = 0;
    if(!dest && !src)
        return(NULL);
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }    
    return(dest);
}