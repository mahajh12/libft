/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:41:46 by malhamel          #+#    #+#             */
/*   Updated: 2022/12/05 13:21:30 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	if (dst == src)
		return (dst);
	if (d > s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// int main()
// {
//     char src[50] = "lorem ipsum dolor sit amet";
//     char dest[20];
// 	// printf("Before memcpy dest = %s\n", dest);
//    //memmove(dest, "consectetur", 5);
//    ft_memmove(src, (src + 5), 9);
//    printf(" = %s\n", ft_memmove(src, (src + 5), 9));
// }