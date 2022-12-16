/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:41:36 by malhamel          #+#    #+#             */
/*   Updated: 2022/11/15 13:53:36 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *)b;
	while (len--)
	{
		s[len] = c;
	}
	return (b);
}

// int main()
// {
// 	char str[] = "helloworld";
// 	ft_memset(str, 97 , 8);
// 	printf("%s", str);
// }