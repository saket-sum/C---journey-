#include<stdio.h>

int main(){
    int a=0,c,limit;

    printf("ENTER YOUR TOTAL LIMIT :- ");
    scanf("%d",&limit);
    if(limit<=0){
        printf("invalid input");
    }
    else{
       int b[limit];

       while(a<limit){
           printf("ENTER YOUR NUMBER :- ");
           scanf("%d",&c);
           b[a]=c;
           a++;
        }
        a=0;
        while(a<=4){
           printf("%d\n",b[a]);
           a++ ;
        }    
    }
}