#include<stdio.h>
int main(){
 int i=24;
 int* j= &i;
 int** k= &j;
 printf("the value of i is %d\n",i);// it tells the value of i in memory
 printf("the value of i is %d\n",*j);// it tells the value of i in memory
 printf("the valuue of i is %d\n",*(&i));// it tells the value of i in memory
 printf("the value of i is %d\n",**k);// it tells the value of i in memory
    return 0;
}