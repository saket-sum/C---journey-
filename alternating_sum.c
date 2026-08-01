#include<stdio.h>

int main(){    
    int n,a=0,b=1;;
    
    printf("ENTER VALUE OF n :- ");
    scanf("%d",&n);

    while(b<=n){
        if(b%2!=0){
            a+=b;
            b++;
        }
        else{
            a-=b;
            b++;
        }
    }printf("%d",a);
}