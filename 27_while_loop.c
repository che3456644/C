
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    while(a<10){
        //while (a>1) -----> thesetwo lines will lead to an infinite loop 
        printf("%d\n",a);
        a++;
    }

    return 0;
}
