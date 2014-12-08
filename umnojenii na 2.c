#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);
    printf("d= ");
    scanf("%d", &d);
    printf("%*d\n%*d\n%*d\n%*d\n", 4, a*2, 5, b*2, 6, c*2, 7, d*2);
    return 0;
}
