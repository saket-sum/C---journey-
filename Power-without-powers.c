#include<stdio.h>

int power(int a,int b);

int main(){
   int a,b;

   printf("ENTER YOUR NUMBER WHICH NEED TO BE POWERED :- ");
   scanf("%d",&a);

   printf("ENTER THE POWER :- ");
   scanf("%d",&b);

   power(a,b);
}

int power(int a,int b){
    int c=1,d=1;
    while(d<=b){
        c *= a;
        d++;        
    }printf("POWER OF YOUR NUMBER IS :- %d",c);
}