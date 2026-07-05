// problem:write the multiplication table of 10 in reverse order
#include <stdio.h>
int main(){
int n=10;
int a;
for(int i=10; i>=1; i--){
    a = n*i;
printf("%d times %d = %d\n", n ,i ,a );
}
    return 0;
}