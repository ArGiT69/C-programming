/*
Q. Write a program with a structure representing a Complex Number 
*/
#include<stdio.h>
typedef struct C {
    int real;
    int imaginary;
}Complex;

int main(){
    Complex c1 ={1,2};
    printf("the value of Complex Number is %d + %di", c1.real,c1.imaginary);
    return 0;
}



