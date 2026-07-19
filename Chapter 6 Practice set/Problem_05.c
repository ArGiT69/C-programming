/*write a program using function that calculates the sum and average of two numbers.
Use pointers and print the values of sum and average in main()
*/
#include <stdio.h>
 
int* sum(int a, int b);
int* sum(int a, int b){
    int s = a+b;
    int*ptr = &s;
    printf("the sum of a and b is %d\n", s);
    return ptr;
}
float* average(int a, int b);
float* average(int a, int b){
    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("the average of a and b is %.2f\n", avg);
    return ptr;
}
int main(){
 int x = 4;
 int y = 6;
 int* ptr1;
 float* ptr2;

 ptr1 = sum(x,y);
 ptr2 = average(x,y);

 sum(x,y);
 average(x,y);
 printf("the address of sum is %u and of average is %u", ptr1, ptr2 );

    return 0;
}

