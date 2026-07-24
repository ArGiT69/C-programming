#include<stdio.h>
#include<string.h>

int main(){
 char st[] = "Arjit";
 char a1[56] = "Arjit";
 char a2[56] = "Parisha";

//  printf("%d\n", strlen(st));
/*strlen is used to count the number of characters in string
excluding the null ('\0') characters
*/
 char target[30];
 strcpy (target, st);//target now contains "Arjit"
printf("%s %s\n", st , target);

strcat(a1,a2);//a1 now contains "ArjitParisha" <no space between the two strings>
printf("%s \n", a1 );
int a = strcmp("far","joke");//returns 0 if both strings are equal,
// returns a negative value if a1<a2 and returns a positive value if a1>a2
printf("%d\n", a); 
return 0;
}