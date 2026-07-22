#include <stdio.h>
int main(){
 int marks[] = {1, 7, 12, 24};

//  int *ptr = &marks[0];
int *ptr = marks;//same as int *ptr = &marks[0];
 
for(int i=0; i<4; i++){
printf("the marks at index %d is %d\n", i, marks[i]);
printf("the marks at index %d is %d\n", i, *ptr);
ptr++;//incrementing the pointer to point to the next element in the array



}
    return 0;
}