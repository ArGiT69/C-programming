/*
 write a program having variable 'i'.Print the address of 'i'.
 Pass this variable to a function and print its address.
 Are these addressess same? Why? 
*/
 #include <stdio.h>
 void printAddress(int* ptr){
    printf("the address of i in function is %p\n", ptr);
 }

 int main(){ 
 int i = 2;
 printf("the address of i in main is %p\n", &i);
 printAddress(&i);
    return 0;
}








