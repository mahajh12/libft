/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:38:00 by malhamel          #+#    #+#             */
/*   Updated: 2022/12/10 16:38:04 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *) src;
	d = (char *) dst;
	if (dst == src)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/* int main ()
{
   const char *src = (void *)0;
   char *dest ="           ";
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, 17);
   //ft_memcpy(dest, src, 17);
   printf("After memcpy dest = %s\n", dest);
   return(0);
} */