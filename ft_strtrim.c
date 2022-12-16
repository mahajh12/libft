/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:16:44 by malhamel          #+#    #+#             */
/*   Updated: 2022/12/10 09:51:59 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		lastindex;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	str = (char *)s1;
	if (str == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	lastindex = ft_strlen(s1);
	while (lastindex && ft_strrchr(set, s1[lastindex]))
		lastindex--;
	str = ft_substr((char *)s1, 0, lastindex + 1);
	return (str);
}
// int	main(void)
// {
// 	char str [] = "Hello \t  Please\n Trim me !\t\t\t\n ";
// 	char set [] = "Hello \t  Please\n Trim me cc!ccc";
// 	printf("%s\n", ft_strtrim(str, set));
// 	return (0);
// }