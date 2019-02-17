#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int x[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char    s[1024];
    scanf("%[^\n]", s);  
    int i = -1;
    int j;
    while (++i < 10)
    {
        j = -1;
        while (s[++j])
        {
            if ((s[j] - '0') == i)
            {
                x[i]++;
            }
        }
        printf("%d ", x[i]);
    }
    return 0;
}
