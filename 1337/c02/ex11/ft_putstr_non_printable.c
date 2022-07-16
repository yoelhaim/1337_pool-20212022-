/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:17:03 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/09/29 11:49:54 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#define HEX "0123456789abcdef"

void	display(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			display(str[i]);
		}
		else
		{
			display('\\');
			display(HEX[(unsigned char) str[i] / 16]);
			display(HEX[(unsigned char) str[i] % 16]);
		}
		i++;
	}
}

int main()
{
	char str[]="ddhjguy\tehjreht";
	ft_putstr_non_printable(str);
}
