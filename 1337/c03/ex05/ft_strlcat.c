/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yolehaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:14:48 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/09/28 07:51:35 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_src = len(src);
	len_dest = len(dest);
	if (len_dest > (size - 1) || size == 0)
		return (size + len_src);
	i = len_dest;
	j = 0;
	while (i < size - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_src + len_dest);
}
/*
#include<stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
	char dest[25]= "awbx" ;
	char *src =  "king";
	printf("%d \n", ft_strlcat(dest,src,6));
	if (dest[4] == '\0')
		printf("true \n");
	else
		printf("false \n");

	printf("%s\n", dest);
	
}*/
