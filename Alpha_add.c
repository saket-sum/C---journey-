#include<stdio.h>

int main(){

    char a;
    int b;

    printf("ENTER YOUR CHARACTER IN LOWERCASE :- ");
    scanf("%c",&a);

    printf("ENTER YOUR INTEGER :- ");
    scanf("%d",&b);
    

    if(a+b>122){ 
        printf("%c",a+b-26);
    }
    else{printf("%c",a+b);
    }

}