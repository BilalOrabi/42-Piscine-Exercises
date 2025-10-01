/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilal.orabi <bilal.orabi@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:23:43 by bilal.orabi       #+#    #+#             */
/*   Updated: 2025/07/19 21:46:49 by bilal.orabi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	char	*dest;
	int		i;

	length = 0;
	i = 0;
	if (src == NULL)
		return (NULL);
	while (src[length])
		length++;
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
