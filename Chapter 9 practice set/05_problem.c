/*
Q. Create an array of 5 Complex Numbers created in Problem 4 and display them 
with the help of a display function.
The values must be taken as an input from the user.
*/
#include<stdio.h>
typedef struct C {
    int real;
    int imaginary;
}Complex;

void display(Complex arr[], int n){
    for(int i = 0; i < n; i++){
        printf("Complex Number %d: %d + %di\n", i+1, arr[i].real, arr[i].imaginary);
    }
}

int main(){
    Complex arr[5];
    for(int i = 0; i<5; i++){
        printf("Enter the value of the real number of the complex number:\n");
        scanf("%d", &arr[i].real);
        printf("Enter the value of the imaginary number of the complex number:\n");
        scanf("%d", &arr[i].imaginary);
    }
    display(arr, 5);
    return 0;
}







