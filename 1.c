#include <stdio.h>
int main(void)
{
    int i;
    for(i=0;i<5;i++)
    {
        continue;
    }
    printf("i=%d",i);
    return 0;
}