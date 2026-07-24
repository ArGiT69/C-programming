/*
Repeat problem 7 for a custom input given by the user.
*/
#include <stdio.h>
int main(){
 int arr[3][10];
 int mul[3];
 printf("enter 3 numbers of which you want multiplication table\n");
  for(int i=0; i<3; i++)
{
    scanf("%d", &mul[i]);
    for (int j=0; j<10; j++)
    {
     arr[i][j] = mul[i]*(j+1);
    }
}
  for(int i=0; i<3; i++)
{
    for (int j=0; j<10; j++)
    {
        printf("the value of %d X %d = %d\n", mul[i], j+1, arr[i][j]);  
    }
    printf("\n");
}

    return 0;
}

