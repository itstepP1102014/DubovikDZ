#include <stdio.h>
#include <stdlib.h>

int main(kalkulyator)
{
    int a, b;
    printf("Enter 2 number = ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d + %d = %d\n", a, b, a+b );
    printf("%d - %d = %d\n", a, b, a-b );
    printf("%d * %d = %d\n", a, b, a*b );
    printf("%d / %d = %d\n", a, b, a/b );
    printf("%d %% %d = %d\n", a, b, a%b );
    return 0;
}
