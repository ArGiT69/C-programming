/*Create an array of 10 numbers. Verify using pointer arithmetic that
 (ptr+2) points to the third element where ptr is a pointer pointing to the first element
 of the array.
*/
#include <stdio.h>
int main(){
 int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int *ptr = a;

 printf("the value at address %u is %d\n", ptr+2,*(ptr+2));
// it should print the value of the third element in the array, which is 3.
    return 0;
}




