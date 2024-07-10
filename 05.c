/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariahudonogova <mariahudonogova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:24:28 by mariahudono       #+#    #+#             */
/*   Updated: 2024/07/10 21:31:44 by mariahudono      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 5;
	printf("Before: x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("After: x = %d, y = %d\n", x, y);
	return (0);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	if (*b != 0)
	{
		int	temp_a;
		*a = *a / *b;
		*b = temp_a % *b;
		temp_a = *a;
	}
}
