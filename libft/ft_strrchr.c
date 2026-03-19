/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilheda <guilheda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:29:32 by guilheda          #+#    #+#             */
/*   Updated: 2025/10/30 09:29:35 by guilheda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	cc;

	cc = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if (*s == cc)
			last = (char *)s;
		s++;
	}
	if (cc == '\0')
		return ((char *)s);
	return (last);
}
