// this program calculates volume of the cylinder
#include<stdio.h>
int main(){
float radius;
float height;
float volume;
printf("enter the radius and height of the cylinder: \n");
scanf("%f%f",&radius, &height);
volume = 3.14* radius * radius *height;
printf("the volume of the cylinder is %.2f", volume);
return 0;
}