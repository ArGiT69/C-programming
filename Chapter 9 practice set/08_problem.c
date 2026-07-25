/*
Q. Solve the problem 7 in typedef keyword
*/
#include<stdio.h>


typedef struct Date{
int dd;
int mm;
int yyyy;
}D;


int compare(D d1, D d2){
    //if d1 is in the future, return 1 
    if( (d1.yyyy==d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd)){

        return 0; 
    }
if(d1.yyyy>d2.yyyy){
    return 1;
}
if(d1.yyyy<d2.yyyy){
    return -1;
}
else if (d1.mm > d2.mm)
{
   return 1; 
}
else if (d1.mm < d2.mm)
{
   return -1; 
}
else if (d1.dd > d2.dd)
{
   return 1; 
}
else if (d1.dd < d2.dd)
{
   return -1; 
}
}


int main(){
    D d1 = {7, 10, 2010};
    D d2 = {2, 9, 2010};
    printf("%d",compare(d1,d2));
    return 0;
}




