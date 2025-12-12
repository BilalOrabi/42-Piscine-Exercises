/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srrrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borabi <bilal.orabi@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:26:17 by borabi            #+#    #+#             */
/*   Updated: 2025/11/28 19:26:17 by borabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (last);
}
