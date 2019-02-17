#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char    ch;
    char    word[1000];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%c", &ch);
    printf("%c\n", ch);
    scanf("%s", word);
    printf("%s\n", word);
    scanf("\n");
    scanf("%[^\n]%*c", word);
    printf("%s\n", word);
    return 0;
}
