 /*
 Write a recursive function to calculate the sum of the first n natural numbers. 
 The function should take an integer n as input and return the sum of the first n natural numbers.
 The base case for the recursion should be when n is equal to 1,
 in which case the function should return 1. For all other values of n,
 the function should return n plus the sum of the first n-1 natural numbers.
 */
#include<stdio.h>

int sum_of_natural_numbers(int n);//function prototype

int sum_of_natural_numbers(int n){//function definition
 if(n==1){ // base condition
    return 1;
 }
 int result = n + sum_of_natural_numbers(n-1); // recursive call
   return result;
}
 int main(){
 int n;
 printf("enter the value of n:\n");
 scanf("%d", &n);
 printf("the sum of the first %d natural numbers is %d\n", n, sum_of_natural_numbers(n));//function call

 return 0;
 }



