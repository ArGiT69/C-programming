/*
 If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
 (i) True
    (ii) False
    (iii)Depends
*/
#include <stdio.h>
int main(){
    int S[3] = {1, 2, 3};
    printf("the value at address %u is %d\n", S+3, *(S+3));
 //the value at address 6422304 is 4194432 is the output of the program,
 // so the answer is (ii) False, because *(S+3) refers to the fourth element of the array,
 // which is out of bounds and leads to undefined behavior.

    return 0;
}




