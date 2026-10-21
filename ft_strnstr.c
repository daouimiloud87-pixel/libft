/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:40:25 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/17 12:44:56 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *big ,const char *little,size_t len)
{
    size_t  i;
    size_t j;
    i = 0;
    
    if(little[i] == '\0')

        return((char *)&big[i]);
    while(i < len && big[i]) 
    {
        j = 0;
        while( little[j] && big[i +j] == little[j] && i + j < len)
            j++;
        if(little[j] == '\0')
            return((char *)&big[i]);
        i++;
    }
    return(NULL);
}