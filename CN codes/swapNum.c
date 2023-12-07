#include<stdio.h>
int main(){
    int x=3,y=5;
    printf("Before swapping x=%d and y=%d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping");
    printf("x=%d\n",x);
    printf("y=%d\n",y);


    return 0;
}