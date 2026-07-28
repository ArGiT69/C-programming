/*
Write a program to create a dynamic array of 5 floats by using malloc()
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
 float n = 5;
 float* ptr;
 ptr = (float*)malloc(n* sizeof (float));

    ptr[0]=3.02;
    ptr[1]=4.69;
    ptr[2]=5.2;
    ptr[3]=6.3;
    ptr[4]=7.4;
    printf("%.2f\n",ptr[0]);
    printf("%.2f\n",ptr[1]);
    printf("%.2f\n",ptr[2]);
    printf("%.2f\n",ptr[3]);
    printf("%.2f\n",ptr[4]);




    return 0;
}   



