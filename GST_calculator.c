#include<stdio.h>

int main(){
    int i=0;
    float a[3],t=0;
    for(i=0;i<3;i++){
        printf("ENTER YOUR %f ITEM PRICE :- ",i+1);
        scanf("%f",&a[i]);
    }
    i=0;
    for(i=0;i<3;i++){
        t+=(a[i]*0.18)+a[i];
    }
    printf("YOUR TOTAL PRICE IS %.2f$",t);
}