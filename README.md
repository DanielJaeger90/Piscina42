# Programa para imprimir un patrón en la consola

Este programa en C imprime un patrón en la consola utilizando la función `print_line` y la función `rush`.

## Funciones

### `void ft_putchar(char c);`

Esta función imprime un solo carácter en la consola.

### `void print_line(int x, int izq, int medio, int dcha);`

Esta función imprime una línea del patrón en la consola.

- `x`: La longitud de la línea.
- `izq`: El carácter que representa el borde izquierdo.
- `medio`: El carácter que representa el contenido de la línea.
- `dcha`: El carácter que representa el borde derecho.

### `void rush(int x, int y);`

Esta función imprime el patrón completo en la consola.

- `x`: El ancho del patrón.
- `y`: La altura del patrón.

## Instrucciones de Uso

1. Implementa la función `ft_putchar` para que imprima un solo carácter en la consola.
2. Ejecuta la función `rush` con los parámetros adecuados para imprimir el patrón en la consola.

## Ejemplo

```c
#include <stdio.h>

void ft_putchar(char c);

void print_line(int x, int izq, int medio, int dcha)
{
    int espacio;

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

void rush(int x, int y)
{
    int espacio;

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

int main()
{
    rush(5, 3); // Ejemplo de uso: imprime un patrón de 5x3 en la consola
    return 0;
}
```

## Notas

- Asegúrate de implementar la función `ft_putchar` adecuadamente para que funcione correctamente.
- Puedes ajustar los parámetros de la función `rush` para imprimir patrones de diferentes tamaños.
- Este programa es útil para crear patrones simples en la consola con caracteres específicos.

¡Disfruta del patrón en la consola!o de filas especificadas al llamar a la función rush.
