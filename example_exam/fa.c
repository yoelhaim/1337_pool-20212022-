/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:42:34 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/10/01 10:44:51 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac , char **av)
{
	int i =0;
	if(ac == 2)
	{
		while (av[1][i]&& av[1][i] != 'a')
			i++;
		if (av[1][i]== 'a')
		{
			write(1, "a\n", 2);
			return 0;
		}
		write(1, "\n",1 );
		return 0;
		
	}
	write(1, "a\n",2);
	
}
