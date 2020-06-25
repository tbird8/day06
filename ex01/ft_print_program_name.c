/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbird <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:28:52 by tbird             #+#    #+#             */
/*   Updated: 2020/06/25 12:03:35 by tbird            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)

{
	write(1, &c, 1);
}

 
int main(int argc, char **argv)
{
	int i;
	i = 0;

	while(argv[0][i]  != '\0' &&  argc)
	
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}
