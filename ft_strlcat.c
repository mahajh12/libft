/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:00:57 by malhamel          #+#    #+#             */
/*   Updated: 2022/12/13 13:25:05 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	if (dst)
		i = ft_strlen(dst);
	else
		i = 0;
	j = 0;
	res = ft_strlen(src);
	if (dstsize <= i)
		return (res + dstsize);
	while (src[j] != '\0' && (i + 1) < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i + ft_strlen(&src[j]));
}

// int main()
// {
// 	char b[10] = "nyan !";
// 	// char str[20] = "This is ";
// 	// char str2[30]= "a potentially long string";
// 	int r = ft_strlcat(NULL, b, 0);
// 	int a = strlcat(NULL, b, 0);
// 	// int og = strlcat((char *)dest, "lorem", 15);
// 	printf("FT - %d\n", r);
// 	printf("NORMAL - %d\n", a);
// 	// printf("%d\n", og);
// }