/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borabi <bilal.orabi@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:42:36 by borabi            #+#    #+#             */
/*   Updated: 2025/11/29 02:42:36 by borabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

typedef	struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return;
	new->next = *lst;
	*lst = new;
}