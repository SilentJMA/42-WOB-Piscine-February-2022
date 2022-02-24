/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:15:44 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/21 10:16:11 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	n;

	n = 0;
	while (argv[0][n] && argc)
		write(1, &argv[0][n++], 1);
	write(1, "\n", 1);
	return (0);
}
