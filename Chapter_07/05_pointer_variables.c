#include <stdio.h>
int main(){
 char p = 'A';
 int *ptr = &p;

 printf("the address of p is %u\n", &p);
 printf("the address of p is %u\n", ptr);
 ptr++;
 printf("the adress of p ia %u\n", ptr);

 float a = 24.12;
 int *ptr1 = &a;
 printf("the address of a is %u\n", &a);
 printf("the address of a is %u\n", ptr1);
 ptr1++;
 printf("the adress of a is %u\n", ptr1);


    return 0;
}