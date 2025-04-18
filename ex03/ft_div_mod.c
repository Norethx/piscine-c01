/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:36:32 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/20 12:34:23 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*#include <stdio.h>

int	main(void)
{
	int num1 = 242;
	int num2 = 100;
	int div;
	int mod;
	int *p1 = &div;
	int *p2 = &mod;

	ft_div_mod(num1, num2, p1, p2);
	printf("div : %d", *p1);
	printf("\nmod : %d", *p2);
}*/
