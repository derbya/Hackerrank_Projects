#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float   f[2];
    int     d[2];	
    scanf("%d %d", &d[0], &d[1]);
    scanf("\n");
    scanf("%f %f", &f[0], &f[1]);
    printf("%d %d\n%.1f %.1f", (d[0] + d[1]), (d[0] - d[1]), (f[0] + f[1]), (f[0] - f[1]));
    return 0;
}
