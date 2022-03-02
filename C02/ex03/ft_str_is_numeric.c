/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:50:09 by yacis             #+#    #+#             */
/*   Updated: 2022/02/14 13:53:15 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 48 && str[i] <= 57))
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
