/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seopark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:27:24 by seopark           #+#    #+#             */
/*   Updated: 2021/02/20 18:13:25 by seopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_row(int max_row, int col)
{
	int	row;

	row = 0;
	while (row < max_row)
	{
		if (row == 0 && col == 0)
		{
			ft_putchar('/');
		}
		else if (row == max_row - 1 && col == 0)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		row++;
	}
}

void	mid_row(int max_row)
{
	int	row;

	row = 0;
	while (row < max_row)
	{
		if (row == 0 || row == max_row - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		row++;
	}
}

void	last_row(int max_row, int max_col, int col)
{
	int	row;

	row = 0;
	while (row < max_row)
	{
		if (row == 0 && col == max_col - 1)
		{
			ft_putchar('\\');
		}
		else if (row == max_row - 1 && col == max_col - 1)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		row++;
	}
}

void	rush(int max_row, int max_col)
{
	int	col;

	col = 0;
	while (col < max_col)
	{
		if (col == 0)
		{
			first_row(max_row, col);
		}
		else if (col == max_col - 1)
		{
			last_row(max_row, max_col, col);
		}
		else
		{
			mid_row(max_row);
		}
		col++;
		ft_putchar('\n');
	}
}
