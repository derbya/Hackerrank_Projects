#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 10000000

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char    buf[MAX];
    int     n;
    char    *num;
    int     *arr;
    int     i;

    fgets(buf, MAX, stdin);
    n = atoi(strtok(buf, "\n"));
    arr = (int *)malloc(sizeof(int) * n);
    fgets(buf, MAX, stdin);
    num = strtok(buf, " ");
    i = -1;
    while (strcmp(num, "\n") != 0)
    {
        arr[++i] = atoi(num);
        num = strtok(NULL, " ");
    }
    long sum = 0;
    i = -1;
    while (++i < n)
        sum += arr[i];
    printf("%ld", sum);
    return 0;
}
