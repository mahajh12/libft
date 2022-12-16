/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:37:17 by malhamel          #+#    #+#             */
/*   Updated: 2022/12/06 12:26:57 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0'
		&& str1[i] == str2[i] && i < (n - 1))
		i++;
	return (str1[i] - str2[i]);
}

// int main()
// {
// 	// char str1[] = "hello";
// 	// char str2[] = "hello";
// 	printf("FT: %d\n", ft_strncmp("test\200", "test\0", 6));
// 	printf("OG: %d\n", strncmp("test\200", "test\0", 6));
// }