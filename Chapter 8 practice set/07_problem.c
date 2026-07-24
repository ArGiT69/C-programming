/*
Write a program to dencrypt the problem 6 string 
*/
#include<stdio.h>
#include<string.h>
int main(){
char str[] = "BSKJU!MPWFT!QBSJTIB";
for(int i = 0; i<strlen(str); i++)
    {
        str[i]= str[i]-1;
    }
    printf("%s",str);
    return 0;
}


