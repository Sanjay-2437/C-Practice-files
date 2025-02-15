#include <stdio.h>
int add(int a,int b);
int main()
{
    int Ans=add(7,8);
    printf("%d",Ans);
}
int add(int a, int b)
{
    return a+b;
}