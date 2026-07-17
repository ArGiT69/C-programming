#include <stdio.h>
//function prototype
int sum(int,int);

//Function definition
int sum(int x, int y){
printf("The sum is %d\n", x+y);
return x+y;
}

int main(){
int a=1;
int p=0;
 
sum(a,p);//function call


int a1=12;
int p1=10;
 
sum(a1,p1);
    return 0;
}
