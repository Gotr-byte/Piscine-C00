/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:57:32 by pbiederm          #+#    #+#             */
/*   Updated: 2022/03/27 13:47:21 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_output(int w, int x, int y, int z)
{
	write (1, &w, 1);
	write (1, &x, 1);
	write (1, " ", 1);
	write (1, &y, 1);
	write (1, &z, 1);
}

void	ft_print_comb2(void)
{
	int	a[4];
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{	
		j = i + 1;
		while (j <= 99)
		{
			a[0] = i / 10 + '0';
			a[1] = i % 10 + '0';
			a[2] = j / 10 + '0';
			a[3] = j % 10 + '0';
			ft_output(a[0], a[1], a[2], a[3]);
			if (i == 98)
			{
				break ;
			}
			write (1, ", ", 2);
			j++;
		}
		i++;
	}
}
