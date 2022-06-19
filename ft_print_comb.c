/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:30:02 by pbiederm          #+#    #+#             */
/*   Updated: 2022/03/24 12:30:02 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	pos_1[3];

	pos_1[0] = '0';
	while (pos_1[0] <= '7')
	{
		pos_1[1] = pos_1[0] + 1;
		while (pos_1[1] <= '8')
		{
			pos_1[2] = pos_1[1] + 1;
			while (pos_1[2] <= '9')
			{
				write (1, &pos_1[0], 1);
				write (1, &pos_1[1], 1);
				write (1, &pos_1[2], 1);
				if (pos_1[0] == '7')
				{
					break ;
				}
				write (1, ", ", 2);
			pos_1[2]++;
			}
		pos_1[1]++;
		}
	pos_1[0]++;
	}
}
