#include<stdio.h>
int main(){
    FILE* ptr;
    ptr = fopen("arjit.txt","r");
    int num;
    fscanf(ptr,"%d",&num);//fscanf is the file counterpart of the scanf
    printf("The value of num is %d\n", num);
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d\n", num);
    return 0;
}