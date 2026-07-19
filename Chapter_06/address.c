#include<stdio.h>
int main(){
 int a=1;
 int p=0;
 int *ap=&a;
 printf("the address of a is %p\n",&a);//it tells the address of a in memory
 printf("the address of p is %p\n",&p);// it tells the address of p in memory
 printf("the value of ap is %p\n",*ap);// it tells the value of ap in memory
    return 0;
}