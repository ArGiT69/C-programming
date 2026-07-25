/*
write a show function to display the content of employee
*/
#include<stdio.h>
#include<string.h>
struct employee{
int code;//this declares a new user defined data type! 
float salary;
char name[10];
};// semicolon is important
void show(struct employee e);//function declaration
void show(struct employee e){
    printf("the code is %d\n the salary is %f\n and the name is %s", e.code, e.salary, e.name);
}
int main(){
        struct employee e1;
        e1.code = 69;
        strcpy(e1.name,"Arjit");
        e1.salary = 690.69;
        show(e1);
        
    return 0;
}