/*This program calculates Simple Interest via input of Principal as "P",
time as "T" and Rate as "R" and prints the Interest*/
#include<stdio.h>
int main(){
 int P,T;
 float R;
printf("Enter your Principal, Time and Rate\n");
scanf("%d%d%f",&P,&T,&R);
float Interest;
Interest= (P*T*R)/100;
printf("the desired Interest is %.2f",Interest);
    return 0;
}