#include <stdio.h>
int main (){
    int a=1,n;
    printf("Enter a Number:");
    scanf("%d",&n);
    for (a=1;a<=n;a=a+1){

        printf("%d+%d=%d\n",a,n,n+1);
    }


    return 0;


    }
