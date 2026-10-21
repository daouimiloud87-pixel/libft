/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:55:23 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/15 13:13:36 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *ptrs1;
    const unsigned char *ptrs2;

    i = 0;
    ptrs1 = (unsigned char *)s1;
    ptrs2 = (unsigned char *)s2;
    
    while(i < n )
    {
        if(ptrs1[i]!= ptrs2[i])
            return(ptrs1[i]-ptrs2[i]);
        i++;
    }
        
    return(0);
}