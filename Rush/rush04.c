/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 00:53:04 by marvin            #+#    #+#             */
/*   Updated: 2024/02/20 00:58:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c);

void	print_line(int x, int izq, int medio, int dcha)
{
    int	espacio;

    espacio = 1;
    if (x > 0)
{
    ft_putchar(izq);
}
    while (espacio < (x - 1))
{
    ft_putchar(medio);
    espacio++;
}
    if (x > 1)
{
    ft_putchar(dcha);
}
    ft_putchar('\n');
}

void	rush(int x, int y)
{
    int	espacio;

    espacio = 1;
    if (x > 0 && y > 0)
    {
    print_line(x, 'A', 'B', 'C');
    }
while (espacio < y - 1 && x > 0)
{
    print_line(x, 'B', ' ', 'B');
    espacio++;
}
    if (y > 1 && x > 0)
    {
    print_line(x, 'C', 'B', 'A');
    }
}