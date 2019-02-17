#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int     i_2;
    double  d_2;
    char    s_2[1000];
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &i_2);
    scanf("\n");
    scanf("%lf", &d_2);
    scanf("\n");
    scanf("%[^\n]", s_2);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + i_2);
    // Print the sum of the double variables on a new line.
    printf("%0.1f\n", d + d_2);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s", s, s_2);
    return 0;
}
