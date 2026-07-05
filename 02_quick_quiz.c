/* Question: write a program to print first n natural numbers using do-while loop.
*/
#include <stdio.h>
int main(){
int n, i=1;
printf("enter your desired number:\n");
scanf("%d",&n);
do{
printf("the number is %d\n",i);
i++;
}
while(i<=n);
    return 0;
}