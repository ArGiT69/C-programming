/*This program checks if a given year is a leap year or not.
 A leap year is defined as:
- It is divisible by 4 but not divisible by 100, OR
- It is divisible by 400.
*/
#include <stdio.h>
 int main(){
 int year;
 printf("Enter the year:\n");
 scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;
 }