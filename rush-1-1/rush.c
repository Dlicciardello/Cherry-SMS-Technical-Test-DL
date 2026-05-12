#include <unistd.h>
#include "my_putchar.h"

static void print_invalid_size(void)
{
    write(2, "Invalid size\n", 13);
}

static char get_char(int col, int row, int x, int y)
{
    int is_top = row == 0;
    int is_bottom = row == y - 1;
    int is_left = col == 0;
    int is_right = col == x - 1;

    if ((is_top || is_bottom) && (is_left || is_right))
        return 'o';
    if (is_top || is_bottom)
        return '-';
    if (is_left || is_right)
        return '|';
    return ' ';
}

void rush(int x, int y)
{
    int row;
    int col;

    if (x <= 0 || y <= 0)
    {
        print_invalid_size();
        return;
    }

    row = 0;
    while (row < y)
    {
        col = 0;
        while (col < x)
        {
            my_putchar(get_char(col, row, x, y));
            col++;
        }
        my_putchar('\n');
        row++;
    }
}
