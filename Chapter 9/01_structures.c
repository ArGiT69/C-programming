#include<stdio.h>
#include<string.h>

struct employee{
int code;//this declares a new user defined data type! 
float salary;
char name[10];
};// semicolon is important


int main(){
    struct employee e1, e2;
    e1.code =179;
    strcpy(e1.name, "Harry");
    e2.salary = 50.69;

    printf("%d %f %s",e1.code,e2.salary,e1.name);


    return 0;
}