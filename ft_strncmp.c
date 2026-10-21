/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 19:10:44 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/16 12:32:46 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2,size_t n)
{
    size_t i ;

    i = 0;
    while(i < n && s1[i] && s1[i] == s2[i])
        i++;
    if(i == n)
        return(0);
    return((unsigned char)s1[i] - (unsigned char)s2[i]);
}