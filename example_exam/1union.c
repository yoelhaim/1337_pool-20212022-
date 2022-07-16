/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1union.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 09:13:39 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/10/08 09:46:19 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int db2(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if(str[i] == c)
			return 0;
		i++;
	}
	return 1;
}
int	db1(char *str, char c, int p)
{
	int i = 0;
	while (i < p)
	{
		if(str[i] == c)
			return 0;
		i++;
	}
	return 1;
}
int main(int ac , char **av)
{
	int i = 0;
	if (ac == 3)
	{
		while(av[1][i])
		{
			if(db1(av[1],av[1][i],i))
				write(1, &av[1][i],1);
			i++;
		}
		i = 0;
		while(av[2][i])
		{
			if(db2(av[1],av[2][i]))
			{
				if(db1(av[2], av[2][i],i))
					write(1, &av[2][i], 1);
			}
			i++;
		}
	}
}

