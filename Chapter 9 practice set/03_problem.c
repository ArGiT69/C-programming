/*
Write a program to illustrate the use of arrow operator in C
*/
#include<stdio.h>
#include<string.h>
typedef struct employee{
 int salary;
 float score;
}Employee;

int main(){
 Employee e1;
 Employee* ptr = &e1;
  (*ptr).salary = 560000;
  (*ptr).score = 56000.69;
//  ptr->salary = 560000;
//  ptr->score = 56000.69;

printf("the value of salary is %d and the value of score is %f\n",ptr->salary ,ptr-> score );

    return 0;
}

