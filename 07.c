/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariahudonogova <mariahudonogova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:23:58 by mariahudono       #+#    #+#             */
/*   Updated: 2024/07/10 22:57:51 by mariahudono      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_rev_int_tab(int *tab, int size);
void	print_array(int *arr, int size);

int	main(void)
{
	int	arr[5];
	int	size;

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	size = sizeof(arr) / sizeof(arr[0]);
	printf("Original array:\n");
	print_array(arr, size);
	ft_rev_int_tab(arr, size);
	printf("Reversed array:\n");
	print_array(arr, size);
	return (0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}
