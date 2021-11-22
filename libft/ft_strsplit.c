/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:45:28 by acamaras          #+#    #+#             */
/*   Updated: 2021/11/17 15:40:21 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			word++;
		i++;
	}
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**fresh;
	int		i;
	int		j;
	int		start;

	if (!s || !c)
		return (NULL);
	fresh = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!fresh)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		fresh[j] = ft_strsub(s, start, i - start);
		i++;
		j++;
	}
	fresh[j] = NULL;
	return (fresh);
}
