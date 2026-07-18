/* write a program using to function to find the average of three numbers
*/
#include <stdio.h>
float average(float a, float b, float c); 

float average(float a, float b, float c){   
    float result;
    result = (a + b + c) / 3.0;             
    return result;                     
}

int main(){
    float a, b, c;
    printf("Enter three numbers: ");
    if (scanf("%f %f %f", &a, &b, &c) != 3) { 
        printf( "Invalid input. Please enter three numbers.\n");
        return 1;
    }

    printf("The average of the numbers you gave is %.2f\n", average(a, b, c)); 
}
