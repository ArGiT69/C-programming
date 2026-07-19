/*
Write a program to change the value of a variable to ten times
of its current value.
*/
#include <stdio.h>
int x10(int* a);

int x10(int* a){
    int result = *a * 10;
    return result;
}

int main(){
    int i = 10;
    printf("the value of i is %d\n", i);
    printf("i x 10 = %d", x10(&i));

    return 0;
}