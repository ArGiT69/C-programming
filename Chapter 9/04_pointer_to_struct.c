#include <stdio.h>

struct employee
{
    int code; // this declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee e1;
    struct employee *ptr;
    e1.code = 56;
    ptr = &e1;
    //now we can print structure elements using:
    printf("%d", (*ptr).code);

    return 0;
}