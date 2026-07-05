//write a program to run the multiplication table of a number n
#include <stdio.h>
int main(){
int n;
int a;
printf("enter your desired number:\n");
scanf("%d",&n);
for(int i=1; i<=10; i++){
    a = n*i;
printf("%d times %d = %d\n", n ,i ,a );
}
    return 0;
}