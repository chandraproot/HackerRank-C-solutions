#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float n, m;
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &n, &m);
    printf("%d %d\n", num1 + num2, num1 - num2 );
    printf("%0.1f %0.1f", n + m, n-m) ;
    return 0;
}
