/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 13:32:49 by ecakiray          #+#    #+#             */
/*   Updated: 2026/02/27 11:50:12 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	abc[3];

	abc[0] = '0';
	abc[1] = '1';
	abc[2] = '2';

	while (abc[0] < '8')
	{
		if (abc[0] < abc[1] && abc[1] < abc[2])
		{
			write(1, abc, 3);
			write(1, ", ", 2);
		}
		abc[2]++;
		if (abc[2] > '9')
		{
			abc[2] = '0';
			abc[1]++;
			if (abc[1] > '9')
			{
				abc[1] = '0';
				abc[0]++;
			}
		}
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }	
