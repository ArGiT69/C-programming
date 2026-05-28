// this program changes celcius to fahrenheit
#include <stdio.h>
int main(){
int c;
int f;
printf("enter the degree celcius you want to convert into fahrenheit\n");
scanf("%d",&c);
f=((c*9)/5)+32;
printf("the degree in fahrenheit is %d",f);
    return 0;
}