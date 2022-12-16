/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 11:52:18 by malhamel          #+#    #+#             */
/*   Updated: 2022/12/06 15:35:49 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	if (*needle == '\0')
		return (hay);
	if (hay == NULL && len == 0)
		return (NULL);
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == hay[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return (hay + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	const char *haystack = "";
//    const char *needle = "HI";
//    char *ret;
//    ret = ft_strnstr(((void *)0), "fake", 3);
//    printf("FT : %s\n", ret);
//    ret = strnstr(((void *)0), "fake", 3);
//    printf("OG : %s\n", ret);
//    return(0);
// }
