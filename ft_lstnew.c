/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:26:38 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/19 13:43:56 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list *new;
    
    new = malloc(sizeof(t_list));
    if(!new)
        return(NULL);
    new -> content = content;
    new -> next = NULL;
    return(new);
}