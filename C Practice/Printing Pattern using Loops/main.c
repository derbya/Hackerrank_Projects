#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void    fill_quad_1(int **grid, int **temp, int n)
{
    int i = -1;
    int j;
    while (++i < n)
    {
        j = -1;
        while (++j < n)
        {
            grid[i][j] = temp[i][j];
        }
    }
}

void    fill_quad_2(int **grid, int **temp, int n)
{
    int i = -1;
    int j;
    while (++i < n)
    {
        j = -1;
        while (++j < n)
        {
            grid[i][j + n - 1] = temp[i][n - 1 - j];
        }
    }
}

void    fill_quad_3(int **grid, int **temp, int n)
{
    int i = -1;
    int j;
    while (++i < n)
    {
        j = -1;
        while (++j < n)
        {
            grid[n + i - 1][j] = temp[n - 1 - i][j];
        }
    }
}

void    fill_quad_4(int **grid, int **temp, int n)
{
    int i = -1;
    int j;
    while (++i < n)
    {
        j = -1;
        while (++j < n)
        {
            grid[n + i - 1][j + n - 1] = temp[n - 1 - i][n - 1 - j];
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    int **grid;
    int gridsize = ((n - 1) * 2 + 1);
    grid = (int **)malloc(sizeof(int *) * gridsize);
    int **temp;
    temp = (int **)malloc(sizeof(int *) * n);
    int i = -1;
    while (++i < gridsize)
        grid[i] = (int *)malloc(sizeof(int) * gridsize);
    i = -1;
    while (++i < n)
        temp[i] = (int *)malloc(sizeof(int) * n);
    i = -1;
    int j;
    while (++i < n)
    {
        j = -1;
        while (++j < n)
        {
            if (i < j)
                temp[i][j] = n - i;
            else
                temp[i][j] = n - j;
        }
    }
    fill_quad_1(grid, temp, n);
    fill_quad_2(grid, temp, n);
    fill_quad_3(grid, temp, n);
    fill_quad_4(grid, temp, n);
    i = -1;
    while (++i < gridsize)
    {
        j = -1;
        while (++j < gridsize)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}
