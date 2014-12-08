#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1; i<=33; i=i+2)
    {
        int n = 1;
        n = i*i*i;
        printf("%d\n",n);
    }

    return 0;
}
