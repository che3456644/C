
#include <stdio.h>

int main()
{
    int i=0;
    //do while looop = while loop which executes at least once
    /*
    while ---> checks the condition and then executes the code
    do-while ---> executes the code and then checks the condition
    */
    do{
        printf("the value of i is %d\n",i);
        i++;
    }while(i<10);

    return 0;
}
