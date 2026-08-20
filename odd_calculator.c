#include<stdio.h>

int counter(int a[10],int b,int c);

int main(){
    int i,b=0;
    printf("ENTER TOTAL NUMBERS YOU WANT :- ");
    scanf("%d",&i);
    int a[i];
    counter(a,b,i);    
}

int counter(int a[10] ,int b,int c){
    int i=0;
    for(i=0;i<c;i++){
        printf("ENTER NUMBER %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    i=0;
    for(i=0;i<c;i++){
        if(a[i]%2!=0){
            b++;
        }
    }
    printf("%d",b);   
    return 0; 
}