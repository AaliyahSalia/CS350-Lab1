#include <stdio.h>

int main(void){
    int subject1, subject2, subject3, subject4, subject5, sum; /* int = allocate mem spaces for the var. subject1, subject2, subject3, subject4, subject5, sum in integer dType. int - keywork. delcaration */
    float percentage; /* float = allocate mem spaces for the var. percentage in float dType. float - keywork. delcaration */

    printf("Enter marks of subject1:\n "); /* prompt */ 
    scanf("%d", &subject1); /* read an integer */ 
    printf("Enter marks of subject2:\n "); /* prompt */
    scanf("%d", &subject2); /* read an integer */
    printf("Enter marks of subject3:\n "); /* prompt */
    scanf("%d", &subject3); /* read an integer */
    printf("Enter marks of subject4:\n "); /* prompt */
    scanf("%d", &subject4); /* read an integer */
    printf("Enter marks of subject5:\n "); /* prompt */
    scanf("%d", &subject5); /* read an integer */
    sum = subject1 + subject2 + subject3 + subject4 + subject5; /* assignment of sum */ 
    percentage = (sum/500.0)*100; /* assignment of percentage */ 
    printf("Sum is %d \n", sum); /* prompt */ 
    printf("Percentage is %f \n", percentage); /* prompt */ 
    
    return 0;  
}
