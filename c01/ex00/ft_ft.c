/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:36:53 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/15 10:00:51 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int	*nbr)
{
	*nbr = 42;
	printf("%d\n", *nbr);

}
int main(void)
{
	int i;
	i = 68890;
	int *nbr = &i;
	ft_ft(nbr);
}
