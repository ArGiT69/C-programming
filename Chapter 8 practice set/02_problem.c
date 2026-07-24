/* 
Write a program to take string as an input from the user using
%c and %s. confirm that the strings are equal
*/
#include <stdio.h>
int main(){
 char str[6];
//  scanf("%s", str);
 for(int i=0; i<6; i++){
    scanf("%c", &str[i]);
    fflush(stdin);//to clear the buffer so that the next character can be taken as input
 }
 str[5] = '\0';//to terminate the string
 printf("%s", str);  


    return 0;
}
