#include <stdio.h>
int main(){
    int i=1;
    while(i<=5)
    {
        if(i==3)
        {
            break;
        }
        printf("%d",i);
        i++;
    }
}