#include<stdio.h>
int main(){
    char ch;
    FILE* ptr;
    ptr = fopen("arjit.txt","r");
    while(1)
    {
        ch = fgetc(ptr);
        printf("%c",ch);
        //when all the content of a file has been read break
        if(ch == EOF)//here EOF means End of File 
        {
            break;
        }
    }
    return 0;
}