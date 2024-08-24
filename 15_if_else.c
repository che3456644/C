
#include <stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    
    if(age>=90)
    //if(age!=90)
    {
        printf("you are above 90, you cannot drive");
    }
    
    else{
        printf("you can drive\n");
    }
    if(age>=50){
        printf("half century");
    }
    else{
        printf("you are not half centurian");
    }

    return 0;
}
