// c program to check whether a number is even or odd
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter a number\n");
    scanf("%d",&a);
    
    if(a%2==0){
        printf("%dis even \n",a);
    }
    else{
        printf("%d is odd \n",a);
    }
    // int a=8;
    // if(a>18){
    //     printf("value is greater than 18 \n");
    // }
    
    // else{
    //     printf("value is less than 18\n");
    // }

    return 0;
}