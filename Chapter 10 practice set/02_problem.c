/*
 Write a program to generate multiplication table of a given number in text
*/
#include<stdio.h>
int main(){
    int n,i;
    FILE* ptr;
    printf("enter your desired number\n");
    scanf("%d", &n);
    ptr = fopen("problem2.txt", "w");
    if(ptr == NULL)
    {
        printf("file error, sorry!");
        return 1;   
    }
    for(i = 1; i<=10; i++){
        fprintf(ptr, "%d x %d = %d\n", n, i, n*i);
    }
    fclose(ptr);
    return 0;
}



