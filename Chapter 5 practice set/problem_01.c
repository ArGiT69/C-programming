/* write a program using to function to find the average of three numbers
*/
#include<stdio.h>

int average(int a, int b, int c);   // function declaration (prototype)

int average(int a, int b, int c){   // function definition
    int result;
    result = (a + b + c) / 3;
    return result;                  // send value back to caller
}

int main(){
    int a, b, c;
    printf("enter your three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);  // & gives the address to store into

    printf("the average of the numbers you gave is %d", average(a, b, c)); // call the function here

    return 0;
}


