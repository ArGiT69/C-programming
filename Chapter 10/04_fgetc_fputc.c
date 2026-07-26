#include<stdio.h>
int main(){
    FILE* ptr;
    ptr = fopen("arjit.txt", "a");
    // char c = fgetc(ptr);//used to read a character from a file
    // printf("%c", c);
    fputc('c',ptr);
    return 0;
}