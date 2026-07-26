#include<stdio.h>

void odd_even(int b);

int main(){

    int a;
    printf("ENTER YOUR NUMBER :- ");
    scanf("%d",&a);
    
    odd_even(a);
}

void odd_even(int b){
    if(b%2==0){
        printf("YOUR NUMBER IS EVEN");
    }
    else{
        printf("YOUR NUMBER IS ODD");}
    
}