#include<stdio.h>
int factorial(int);

int factorial(int n){
// Factorial (n)= 1x2x3x....x n-1 x n    
// Factorial (n)= factorial(n-1) x n    
// Factorial (n-1)= 1x2x3x.... x n-1
if (n==1 || n==0)//BASE CONDITION
{
    return 1;
}
 // factorial(n)= factorial (n-1)*n
return factorial (n-1) * n;

}

 int main(){
    int a = 6;
printf("the factorial of %d is %d", a, factorial(a));

    return 0;
 }