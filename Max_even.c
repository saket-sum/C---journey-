#include<stdio.h>

int main(){
    
    int N ,Ns,a=1,b=0,c=0;
    
    printf("enter :- ");
    scanf("%d",&N);

    while(a<=N){
        scanf("%d",&Ns);
        if(Ns%2==0){
            b++;
            a++;
            if(c<=b){
                c=b;
            }
        }
        else if(Ns%2!=0){
            if(c<=b){
                c=b;}
            b=0;
            a++;
        }
    }
    printf("%d",c);
}