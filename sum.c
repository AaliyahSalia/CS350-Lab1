#include <stdio.h>

int main(void){
    int integer1, integer2, sum; /* int = allocate mem spaces for the var. integer1, integer2, sum in integer dType. int - keywork. delcaration */

    printf("Enter first integer:\n "); /* prompt */ 
    scanf("%d", &integer1); /* read an integer */ 
    printf("Enter second integer:\n "); /* prompt */
    scanf("%d", &integer2); /* read an integer */
    sum = integer1 + integer2; /* assignment of sum */ 
    printf("Sum is %d \n", sum); /* prompt */ 
    
    return 0;  
}

