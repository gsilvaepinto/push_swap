/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilheda <guilheda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:19:22 by guilheda          #+#    #+#             */
/*   Updated: 2025/10/30 09:40:04 by guilheda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	const unsigned char	*srcptr;
	unsigned char		*destptr;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	srcptr = src;
	destptr = dest;
	if (destptr > srcptr)
	{
		while (count--)
		{
			destptr[count] = srcptr[count];
		}
	}
	else
	{
		i = 0;
		while (i < count)
		{
			destptr[i] = srcptr[i];
			i++;
		}
	}
	return (dest);
}
