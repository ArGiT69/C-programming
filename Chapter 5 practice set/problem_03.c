/*
write a function to calculate the force of attraction on a body of mass "m"
exerted by earth. Consider g = 9.8 m/s2
*/
#include<stdio.h>
 float force(float m);

 float force(float m){
  float result = m *9.8;
 return result;
 }

int main(){
 float m;
 printf("enter your mass exerted by the body\n");
 scanf("%f",&m);
 printf("the force of attraction the body by the earth is %.2f\n", force(m));


    return 0;
}

