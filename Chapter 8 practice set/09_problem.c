/*
Write a program to check whether a given character
is present in a string.
*/
#include<stdio.h>
#include<string.h>
int main(){
    char c = 'A';
    int contains = 0;
    char str[] = "PARISHA";
    for(int i = 0; i < strlen(str); i++)
    {
       if(str[i] == c){
        contains = 1;
        break;
       }
    }

    if(contains){
        printf("Yes it contains!\n");
    }
    else{
        printf("does not contain\n");
    }

    printf("%d\n", contains);
    return 0;
}