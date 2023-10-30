#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter First n odd numbers n:");
    scanf("%d",&n);
    int odd=1;
    int sum=0;
    for(int i=0;i<n;i++){
        printf("%d ",odd);
        odd=odd+2;
        sum+=odd;
        }
        printf("\nSum Of odd %d",sum);

}


