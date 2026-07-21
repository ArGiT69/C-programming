#include <stdio.h>
int main(){
 int p = 24;
 int *ptr = &p;
 printf("the address of p is %u\n", &p);
 printf("the address of p is %u\n", ptr);
 ptr++;
 printf("the adress of p ia %u\n", ptr);// as the int takes 4 bytes 
 //of storage, the value of it increases by 4 not 1


    return 0;
}