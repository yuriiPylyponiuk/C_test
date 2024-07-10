/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariahudonogova <mariahudonogova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 23:39:30 by mariahudono       #+#    #+#             */
/*   Updated: 2024/07/11 00:13:45 by mariahudono      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	value;
	int	*p[9];
	int	i;

	value = 0;
	p[0] = &value;
	i = 1;
	while (i < 9)
	{
		p[i] = (int *)(&p[i - 1]);
		i++;
	}
	printf("Before: %d\n", value);
	ft_ultimate_ft((int *********)p[8]);
	printf("After: %d\n", value);
	return (0);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
