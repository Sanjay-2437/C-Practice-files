#include <stdio.h>
void add(int a,int b);
int main()
{
    add(7,8);
    int c=7,d=12;
    add(c,d);
    }
void add(int a,int b)
{
    printf("%d",a+b);
}