#include <stdio.h>
int main()
{
    int a=7;
    int*p=&a;
    int**q=&p;
    printf("%d:",a);
    printf("%d:",**q);
    printf("%d",*p);
}