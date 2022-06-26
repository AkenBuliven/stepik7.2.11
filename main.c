#include <stdio.h>
#include <math.h>

int main()
{
    int n, r = 1;
    scanf("%d", &n);

    while(pow(2,r) < n)
      r++;
    printf(" %d", r); 
    return 0;
}