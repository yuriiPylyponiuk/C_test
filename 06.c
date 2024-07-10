/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariahudonogova <mariahudonogova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:36:50 by mariahudono       #+#    #+#             */
/*   Updated: 2024/07/10 22:21:31 by mariahudono      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[50];
	int		length;

	strcpy(str, "Hello, world!");
	length = ft_strlen(str);
	printf("The length of the string \"%s\" is: %d\n", str, length);
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
