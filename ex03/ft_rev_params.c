/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbird <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:35:00 by tbird             #+#    #+#             */
/*   Updated: 2020/06/25 12:54:13 by tbird            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)

{
	write (1, &c, 1);
}

int main(int argc, char**argv)
{
	int i;
	int j;

	i = argc - 1;
   while (i > 0)
   {
	   j = 0;
	   while (argv[i][j] != '\0')
	   {

		   ft_putchar(argv[i][j]);
				   j++;
	   }
     ft_putchar('\n');
		 i--;
	   }
 }
