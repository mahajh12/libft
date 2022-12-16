/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:23:36 by malhamel          #+#    #+#             */
/*   Updated: 2022/12/08 16:47:04 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// char change(unsigned int i, char c)
// {
// 	return (c + 1);
// }

// int main()
// {
// 	char name[] = "maha";
// 	char *str;
// 	str = ft_strmapi(name, *change);
// 	printf("%s\n", str);
// 	printf("%c\n", change(0, 'm'));
// 	printf("%c\n", change(1, 'a'));
// 	printf("%c\n", change(2, 'h'));
// 	printf("%c\n", change(3, 'a'));
// }