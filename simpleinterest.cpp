#include <stdio.h>

int main(void){
    int principal, rate, time, simpleinterest; /* int = allocate mem spaces for the var. principal, rate, time, simpleinterest in integer dType. int - keywork. delcaration */
    float pi = 3.14; /* float = allocate mem spaces for the var. pi in float dType. float - keywork. delcaration */

    printf("Enter principal amount:\n "); /* prompt */ 
    scanf("%d", &principal); /* read an integer */ 
    printf("Enter rate of interest:\n "); /* prompt */
    scanf("%d", &rate); /* read an integer */
    printf("Enter time period:\n "); /* prompt */
    scanf("%d", &time); /* read an integer */
    simpleinterest = (principal * rate * time)/100; /* assignment of simpleinterest */ 
    printf("Simple interest = %d \n", simpleinterest); /* prompt */ 
    
    return 0;  
}


