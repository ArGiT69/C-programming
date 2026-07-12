//i wrote this just to maintain streak, will code better from my holidays
#include <stdio.h>
int main(){
    int n;
    printf("Enter a natural number:\n");
    scanf("%d", &n);
    for(int i=n; i>=1; i--){
        printf("%d\n", i);
    }
    return 0;
}