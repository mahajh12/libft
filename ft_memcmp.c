/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:57:30 by malhamel          #+#    #+#             */
/*   Updated: 2022/11/17 14:51:58 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (n == 0)
	{
		return (0);
	}
	while (str1[i] == str2[i] && i < (n - 1))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

// int main(void)
// {
// 	char str1[] = "hello";
// 	char str2[] = "hqllo";

// 	printf("%d\n", memcmp(str1, str2, 2));
// 	printf("%d\n", ft_memcmp(str1, str2, 2));
// }