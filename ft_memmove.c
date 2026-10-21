/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:41:10 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/16 11:27:38 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest ,const void *src,size_t n)
{
    size_t i;
    unsigned char *s;
    unsigned char *d;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    i = 0;
    if(d < s)
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        i = n ;
        while(i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }
    return(dest);
}