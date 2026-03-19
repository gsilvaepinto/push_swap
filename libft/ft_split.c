/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilheda <guilheda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:23:34 by guilheda          #+#    #+#             */
/*   Updated: 2026/03/19 13:45:13 by guilheda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_wordlen(const char *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	*ft_strndup(const char *s, int start, int len)
{
	char	*word;
	int		i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	res = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			res[j] = ft_strndup(s, i, ft_wordlen(s, c, i));
			if (!res[j])
				return (NULL);
			i += ft_wordlen(s, c, i);
			j++;
		}
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}

int	main(void)
{
	char	**res;
	int		i;

	res = ft_split("hello world 42 ", ' ');
	if (!res)
		return (1);
	i = 0;
	while (res[i])
	{
		printf("%d: %s\n", i, res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
