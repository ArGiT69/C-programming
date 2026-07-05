//write a program to implement problem 3 using 'for' loop
#include <stdio.h>
int main(){
int sum=0;
for (int i=1;  i<=10;){
sum +=i;
i++;
}
printf("the sum of first ten natural numbers is:%d\n",sum);
    return 0;
}