/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:48:28 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/10/10 10:09:13 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	a;
	int	b;
	int	n;
	char *tab;
	int count;

	count = 1;
	a = 0;
	b = 0;
	n = 0;
	if(a < size)
		count += strlen (strs[a++] + strlen(sep));
	tab = malloc(sizeof(char *) * count);
	a = -1;
	while (a++ < size)
	{
		while(strs[a][b])
			tab[n++] =strs[a][b++];
		b = 0;
		while(sep[b] && a < size -1)
			tab[n++] = sep[b++];
		b = 0;
	}
	tab[n] = '\0';
	return (tab);
}
#include <stdio.h>
int main()
{
	char str[]= "salam";
	char *sep[]= "hello";
	printf("%s", ft_strjoin(6,str,sep));
}
