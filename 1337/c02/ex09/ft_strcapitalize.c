/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:11:50 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/09/26 15:05:16 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_true;

	i = 0;
	is_true = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || \
				(str[i] >= 'a' && str[i] <= 'z') || \
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (is_true && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!is_true && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			is_true = 0;
		}
		else
			is_true = 1;
		i++;
	}
	return (str);
}
