#include<stdio.h>

int main(){
    char a;
    int b;

    printf("ENTER YOUR CHARACTER IN LOWERCASE :- ");
    scanf("%c",&a);

    printf("ENTER YOUR INCREASING AMOUNT BETWEEN [0,25]:- ");
    scanf("%d",&b);

    if(b>=0 && b<=25 && a>=97 && a<=122 ){
        if(a+b<=122){
           printf("YOUR NEW NUMBER IS :- %c",a+b);
        }
        else if(a+b>=123){
           printf("YOUR NEW NUMBER IS :- %c",(a+b-26));
        }
    } 
    else{
        printf("INVALID INPUT XXXX ");        
    }
}