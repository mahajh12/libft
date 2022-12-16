/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:49:28 by malhamel          #+#    #+#             */
/*   Updated: 2022/12/06 12:39:20 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*alt;
	unsigned char	str;

	i = 0;
	alt = (unsigned char *)s;
	str = (unsigned char)c;
	while (i < n)
	{
		if (alt[i] == str)
		{
			return (&alt[i]);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     const char str[] = "hello";
//    const char ch = 'l';
//    char *ret;
//    ret = ft_memchr(str, ch, ft_strlen(str)+1);
//    printf("String after |%c| is - |%s|\n", ch, ret);  
// }

// int main(void)
// {
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
// 	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
// 	printf("%s\n", (char *)memchr(tab, -1, 7));
// }