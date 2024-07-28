
#include <stdio.h>
#include <math.h>

int main()
{
    int a = 5;
    int b = 5;
    
    printf("the value of a + b is %d\n",a + b);
    printf("the value of a - b is %d\n",a - b);
    printf("the value of a * b is %d\n",a * b);
    printf("the value of a / b is %d\n",a / b);
    
    
    // int b=2,c=3;
    // int z;
    // z=b*c;         ========> legal
    // printf("the value of z is %d\n",z);
    
    // b*c=z;         ========> illegal(not allowed)
    // printf("the value of z is %d",z);
    
    printf("5 when divided by 2 leaves a remainder of %d\n", 5%2);
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5%2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5%-2);
    
    // there is no operator to perform exponentitaion in c 
    printf("the value of 4 ^ 5 is %d\n", 4^5); // ---> will not produce 4 to the power 5 
    printf("the value of 4 to the power 5 is %f\n",pow(2,5));
    printf("the value of 3.0/9 is %f\n", 3.0/9); //----> quiz question answer. {boult helpline number - 18001036354}
    
    return 0;
}



