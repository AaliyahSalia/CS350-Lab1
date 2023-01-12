#include <stdio.h>

int main(void){
    int radius, area, circumference; /* int = allocate mem spaces for the var. radius, area, circumference in integer dType. int - keywork. delcaration */
    float pi = 3.14; /* float = allocate mem spaces for the var. pi in float dType. float - keywork. delcaration */

    printf("Enter radius of circle:\n "); /* prompt */ 
    scanf("%d", &radius); /* read an integer */ 
    area = pi * radius * radius; /* assignment of area */ 
    circumference = 2 * pi * radius; /* assignment of circumference */ 
    printf("Area of circle = %d \n", area); /* prompt */ 
    printf("Circumference = %d \n", circumference); /* prompt */ 
    
    return 0;  
}
