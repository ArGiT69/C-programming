//write a program to implement problem 3 using 'do-while' loop
#include <stdio.h>
int main(){
int sum=0;
int i=1;  
do{
sum +=i;
i++;
}
while(i<=10);
printf("the sum of first ten natural numbers is:%d\n",sum);
    return 0;
}