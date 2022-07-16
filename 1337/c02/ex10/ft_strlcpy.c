/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:34:00 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/09/28 16:33:28 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		return (length(src));
	}
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length(src));
}

#include<stdio.h>
int main()
{
	char src[] = "mohamed";
	char dest[20];
	printf("%d", ft_strlcpy(dest,src,5));

}
