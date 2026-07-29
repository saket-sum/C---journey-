#include<stdio.h>

int fact(int c);

int main(){

    int a;
    printf("ENTER YOUR INTEGRAL NUMBER FOR IT`S FACTORIAL :- ");
    scanf("%d",&a);

    if(a<0){
        printf("INVALID INPUT :(");
    }else{
        fact(a);}

    }
    
    


int fact(int c){
    int a=1,b=1;
    for(a=1;a<=c;a++){
        b=a*b;         
 }printf("%d! = %d",c,b);

}