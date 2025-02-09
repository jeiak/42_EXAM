/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessica <jessica@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:24:12 by jessica           #+#    #+#             */
/*   Updated: 2025/02/06 19:32:00 by jessica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int n)
{
	if (n > 9)
		putnbr(n / 10);
	write (1, &"0123456789"[n % 10], 1);
}

int main(int argc, char **argv)
{
	(void)argv;
	putnbr(argc - 1);
	write (1, "\n", 1);
	return 0;
}
