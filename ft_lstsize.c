/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:54:25 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/20 11:00:58 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
unsigned int ft_lstsize(t_list *lst)
{
     int count;

     count = 0;
     while(lst)
     {
        count++;
        lst = lst -> next;
     }
     return(count);
}