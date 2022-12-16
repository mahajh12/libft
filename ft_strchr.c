/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:25:18 by malhamel          #+#    #+#             */
/*   Updated: 2022/12/10 17:00:27 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*alt;
	char	str;

	i = 0;
	alt = (char *)s;
	str = (char)c;
	while (alt[i] != '\0')
	{
		if (alt[i] == str)
		{
			return (&alt[i]);
		}
		i++;
	}
	if (c == '\0')
		return (&alt[i]);
	return (NULL);
}
// int main()
// {
//  const char str[] = "hello";
//    const char ch = 'e';
//    char *ret;
//    ret = ft_strchr(str, ch);
//    printf("String after |%c| is - |%s|\n", ch, ret);
// }