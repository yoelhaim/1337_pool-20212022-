/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yolehaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 07:38:10 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/09/28 07:43:07 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	n--;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		++i;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
#include <stdio.h>
int main()
{
	char s1[]= "abcd";
	char s2[]= "abca";
	printf("%d", ft_strncmp(s1,s2,2));
}*/
