#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
       srand(time(0));
    int player, computer = rand() % 3;

   /*
   0--> Snake
   1--> Water
   2--> Gun
   */
   printf("Choose 0 for Snake, 1 for water and 2 for Gun\n");
   scanf("%d", &player);
   printf("%d", computer);





   
    return 0;
}