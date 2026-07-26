/*
Q.Write a program to read a text file character by character
and write its content twice in separate file    
*/
#include<stdio.h>
int main(){
    char ch;
    FILE* ptr;
    FILE* ptr2;

    ptr = fopen("problem3(1stone).txt","r");
    ptr2 = fopen("problem3(2ndOne).txt","a");
    while(1)
    {
        //when all the content of a file has been read break
        if(ch == EOF)//here EOF means End of File 
        {
            break;
        }
        else
        {
         ch = fgetc(ptr);
         fprintf(ptr2, "%c",ch);
         fprintf(ptr2, "%c",ch);
         printf("%c",ch);
        }
    }
    return 0;
}