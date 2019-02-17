#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int x = -1;
    while (s[++x])
    {
        if (s[x] == ' ')
        {
            write(1, "\n", 1);
            continue ;
        }
        write(1, &s[x], 1);
    }
    return 0;
}
