/*
write a program using recursion to calculate the nth element of Fibonacci series
*/
#include <stdio.h>
int fibonacci(int n); // function prototype

int fibonacci(int n){
 if(n==0 || n==1){ // base condition
    return n;
 }
   int result = fibonacci(n-1) + fibonacci(n-2); // recursive call
   return result;
}
int main(){
    int n;
    printf("enter the value of n:\n");
    scanf("%d", &n);
    printf("the %dth element of fibonacci series is %d\n", n, fibonacci(n));


}


