#include<stdio.h>
 int sum(int, int);


 int sum(int a, int b){
 return a+b;
 }
int main(){
 int x=1;
 int y=6;
 printf("the sum of 1 and 6 is %d\n", sum(x,y));
    return 0;
}