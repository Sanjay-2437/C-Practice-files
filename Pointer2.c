#include <stdio.h>
int main()
{
    int a=7;
    int*p=&a;
    printf("Address of A: %d",&a);
    printf("Address of A: %d",p);
}