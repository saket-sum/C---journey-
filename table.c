#include<stdio.h>

int main(){
    int a,b=1,c=1;
    printf("ENTER YOUR TABLE NUMBER :- ");
    scanf("%d",&a);
    if(a>=1){
        while(c<=10){
            printf("%d X %d = %d\n",a,c,a*b);
            c++;
            b++;}
    }
    else{
        printf("INVALID INPUT");
    }
    
}