/*
Q. Modify the program above to check whether the file exists or not
before opening the file
*/
#include<stdio.h>
int main(){
    FILE* ptr;
    ptr = fopen("arjit2.txt","r");
    int num;
    if(ptr == NULL){
        printf("the file doesn't exist!\n");
    }
    else{
       
        fscanf(ptr,"%d",&num);//fscanf is the file counterpart of the scanf
        printf("The value of num is %d\n", num);
        fscanf(ptr,"%d",&num);
        printf("The value of num is %d\n", num);
    }
        return 0;
}


