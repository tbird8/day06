/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbird <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:08:53 by tbird             #+#    #+#             */
/*   Updated: 2020/06/25 12:28:40 by tbird            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<unistd.h>
 
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_print_params(int argc, char **argv)
{
	int i;
	i =-1;
	while ( ++i<argc)

	{
		ft_putchar(*argv[i]);
	}
			return (0);
			}

int main(int argc, char **argv)
		  
{
	  printf("%s\n", argv[0]);
			  return(0);
}

