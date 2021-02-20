/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seopark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:44:17 by seopark           #+#    #+#             */
/*   Updated: 2021/02/20 18:18:16 by seopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_nputchar1(int max_row){
	int	row;

	row = 0;
	while (row < max_row){
		if (row == 0 || row == max_row - 1)
		{
			ft_putchar('o');
		} 
		else 
		{
			ft_putchar('-');
		}
		row++;
	}
}

void	ft_nputchar2(int max_row){
	int	row;

	row = 0;
    while (row < max_row)
	{
		if (row == 0 || row == max_row - 1)
		{
			ft_putchar('|');
		}
	   	else 
		{
			ft_putchar(' ');
		}
		row++;
	}
}

void	rush(int max_row, int max_col)
{
	int col;

    col = 0;
    while (col < max_col)
	{
    	if (col == 0 || col == max_col - 1)
		{
			ft_nputchar1(max_row);
	   	}
	   	else 
		{
			ft_nputchar2(max_row);
		}
		col++;
		ft_putchar('\n');
	}
}
