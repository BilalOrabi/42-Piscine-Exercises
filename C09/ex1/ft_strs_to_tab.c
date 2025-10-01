/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilal.orabi <bilal.orabi@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:27:50 by bilal.orabi       #+#    #+#             */
/*   Updated: 2025/07/21 19:56:31 by bilal.orabi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*dest;
	int		i;

	length = 0;
	i = 0;
	if (src == NULL)
		return (NULL);
	length = ft_strlen(src);
	dest = malloc(sizeof(char) * (length + 1));
	if (!dest)
		return (NULL);
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	ft_free(int size, t_stock_str *arr)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(arr[i].copy);
		i++;
	}
	free(arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*st_str;

	i = 0;
	st_str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!st_str)
		return (NULL);
	while (i < ac)
	{
		st_str[i].size = ft_strlen(av[i]);
		st_str[i].str = av[i];
		st_str[i].copy = ft_strdup(av[i]);
		if (!st_str[i].copy)
		{
			ft_free(i, st_str);
			return (NULL);
		}
		i++;
	}
	st_str[i].size = 0;
	st_str[i].str = NULL;
	st_str[i].copy = NULL;
	return (st_str);
}
