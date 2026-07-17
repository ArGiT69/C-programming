/*write a program with three functions
Good morning function which prints "good morning"
Good afternoon function which prints "good afternoon"
Good evening function which prints "good evening"
*/
#include <stdio.h>
void good_morning();//Function prototype
void good_afternoon();//Function prototype
void good_evening();//Function Prototype
//Function Definition
void good_morning(){
    printf("good morning\n");
}
void good_afternoon(){
    printf("good afternoon\n");
}
void good_evening(){
    printf("good evening\n");
}

int main(){
    //function call
good_morning();
good_afternoon();
good_evening();
    return 0;
}