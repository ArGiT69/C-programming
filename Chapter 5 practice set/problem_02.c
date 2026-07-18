/*
write a program using function to calculate celcius into fahrenheit
*/
#include <stdio.h>

float fahrenheit(float celcius);        // declaration: takes a float, returns a float

float fahrenheit(float celcius){        // definition: parameter matches
    float result = (celcius * 1.8) + 32;
    return result;
}

int main(){
    float celcius;
    printf("enter your temperature in degree celcius:\n");
    scanf("%f", &celcius);
    printf("your temperature is %.2f degree fahrenheit", fahrenheit(celcius)); // call it here

    return 0;
}