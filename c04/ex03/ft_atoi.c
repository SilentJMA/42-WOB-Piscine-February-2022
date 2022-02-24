/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:14:04 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/19 17:50:31 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	reverse;
	int	i;

	result = 0;
	i = 0;
	reverse = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			reverse *= -1;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - '0';
	return (result * reverse);
}
#include <stdio.h>

int main(void)
{
	char *src = "  ---+--+1234ab567";
	printf("the number is : %d \n", ft_atoi(src));
	return (0);
}