#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int   i;
  int   j;
  int   a[3] = {0,0,0};
  i = 0;
  j = 0;
  while (++i < n)
  {
      j = i;
      while (++j <= n)
      {
          if ((i & j) > a[0] && (i & j) < k)
          {
              a[0] = i & j;
          }
          if ((i | j) > a[1] && (i | j) < k)
          {
              a[1] = i | j;
          }
          if ((i ^ j) > a[2] && (i ^ j) < k)
          {
              a[2] = i ^ j;
          }
      }
  }
  printf("%d\n%d\n%d\n", a[0], a[1], a[2]);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
    return 0;
}
