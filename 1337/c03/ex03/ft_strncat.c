/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yolehaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 08:40:21 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/09/27 15:28:06 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (dest[size])
		size++;
	while (src[i] && i < nb)
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
/*
#include <string.h>
#include<stdio.h>
int main()
{
	char src[]= "youssef";
	char dest[10];
	printf("for string => %s\n", strncat(dest,src,3));
//	printf("for function => %s", ft_strncat(dest,src,3));

}*/
