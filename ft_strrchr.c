/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:41:54 by malhamel          #+#    #+#             */
/*   Updated: 2022/12/05 17:33:49 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;
	char		*alt;
	char		str;

	alt = (char *)s;
	str = (char)c;
	len = ft_strlen(alt);
	if (c == 0)
		return ((char *)(s + len));
	while (len--)
	{
		if (alt[len] == str)
			return (&alt[len]);
	}
	return (NULL);
}
// int main()
// {
// // 	char *str = "tripouille";
// //    const char ch = '\0';
// //    char *ret;
// //    char *og;
// //    ret = ft_strrchr(str, "");
// //    printf("MINE: 	String after |%c| is - |%s|\n", ch, ret);
// //    og = strrchr(str, "");
// //    printf("String after |%c| is - |%s|\n", ch, og);

// 	printf("%s",ft_strrchr("hi in form",""));
// 	printf("%s",strrchr("hi in form",""));
// }
