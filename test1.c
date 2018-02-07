#include "stdio.h"
int main()
{
    int i[10]={1,2,3,4,5,6,7,8,9,10},*pi;
    pi=i;
    pi++;
    printf("pi=%d\n",*pi);
    printf("adress pi is %x",pi);
    return 0;
}
