/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 16:07:14 by hberger           #+#    #+#             */
/*   Updated: 2019/06/24 23:15:54 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int j;

	i = 0;
	j = 0;
	(void)length;
	while (tab[i] != 0)
	{
		if (f(tab[i]) != 0)
			j++;
		i++;
	}
	return (j);
}
