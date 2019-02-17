#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char    english_numbers[11][10] = {"zero", "one", "two", "three", "four", "five", "six" ,"seven", "eight", "nine"};
    for (int i = a; i <= b; i++)
    {
        if (i < 10)
            printf("%s\n", english_numbers[i]);
        else
        {
            if (i % 2)
                printf("odd\n");
            else
                printf("even\n");
        }
    }

    return 0;
}
