#include <stdio.h>

int main(void){
    float centigrade, fahrenheit; /* float = allocate mem spaces for the var. centigrade, fahrenheit in float dType. float - keywork. delcaration */

    printf("Enter temperature in degree centigrade:\n "); /* prompt */ 
    scanf("%f", &centigrade); /* read an float */ 
    fahrenheit = (centigrade * 9/5) + 32; /* assignment of fahrenheit */ 
    printf("Temperature in Fahrenheit = %f \n", fahrenheit); /* prompt */ 
    
    return 0;  
}

