/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:06:22 by malhamel          #+#    #+#             */
/*   Updated: 2022/12/10 15:59:55 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

int	num_word(char const *str, char c)
{
	int	i;
	int	count;
	int	j;

	i = 0;
	count = 0;
	j = c;
	while (str[i] != '\0')
	{
		if (j == c && str[i] != c)
			count++;
		j = str[i];
		i++;
	}
	return (count);
}

void	myfree(char *s, int i)
{
	while (i >= 0)
	{
		free(&s[i]);
		i--;
	}
	free (s);
}

static	char	*copy_string(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	str = (char *)ft_calloc((i + 1), sizeof(char));
	if (!str)
		return (0);
	ft_memcpy(str, s, i);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**split;

	if (!s)
		return (0);
	count = num_word(s, c);
	split = (((char **) malloc (sizeof(char *) * (count + 1))));
	if (!split)
		return (0);
	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		split[i] = copy_string(s, c);
		if (!split[i])
			myfree(*split, i);
		s += ft_strlen(split[i]);
		i++;
	}
	split[i] = 0;
	return (split);
}

// int		main(void)
// {
// 	int i = 0;
// 	char **tab;

// 	tab = ft_split("hi my name", ' ');
// 	while (i < 3)
// 	{
// 		printf("string %d : %s\n", i, tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
