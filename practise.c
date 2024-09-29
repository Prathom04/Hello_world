#include<stdio.h>
int main(){
    int a, b ;
    scanf("%d %d", &a, &b);

    if (a>b){
        goto x;
    }
    else {
        goto y;
    }
    x:
    printf("a is greater than b");
    y:
    printf("b is greather than a");
    return 0;
    
}