/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borabi <bilal.orabi@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:39:44 by borabi            #+#    #+#             */
/*   Updated: 2025/11/28 15:39:44 by borabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{ 
	return ((c >= 'A' && c <= 'Z')||(c >= 'a'&& c <= 'z'));
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}