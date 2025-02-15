#include <stdio.h>
int main()
{
    int*p[3];
    int a=5,b=7,c=9,i=0;
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    for (i=0;i<3;i++)
{
    printf("%d",*p[i]);
}
}