/*Question: Write a C program to demonstrate decrementing case in for loop. 
natural numbers in decreasing order from n to 1 using for loop. */
#include <stdio.h>
int main(){
    int n;
    printf("enter the natural number:\n");
    scanf("%d", &n);
    for(int i=n; i>=1; i--){
        printf("%d\n",i);
    }
}