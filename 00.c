/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariahudonogova <mariahudonogova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 23:33:15 by mariahudono       #+#    #+#             */
/*   Updated: 2024/07/10 23:38:14 by mariahudono      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	value;

	value = 0;
	printf("Before: %d\n", value);
	ft_ft(&value);
	printf("After: %d\n", value);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
