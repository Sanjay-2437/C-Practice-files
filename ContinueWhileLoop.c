#include <stdio.h>
int main(){
    int i=2;
    while(i<=7)
    {i++;
        if(i==5)
        {
            continue;
        }
        printf("%d",i);
    }
}