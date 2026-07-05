/*write a program to calculate the sum of the numbers occuring in the multiplication table 
of 8 (consider 8*1 to 8*10)
*/
#include<stdio.h>
int main(){
    int n=8;
    int a;
    int sum=0;
    for(int i=1; i<=10; i++){
        a = n*i;
        sum += a;
    }
    printf("the sum of the numbers occuring in the multiplication table of 8 is:%d\n", sum);
    return 0;
}
