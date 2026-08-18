#include<stdio.h>
#include<math.h>

int main(){
    int a[5],i=1;
    for(i=1;i<=5;i++){
        printf("ENTER YOUR NUMBER %d :- ",i);
        scanf("%d",&a[i]);
    }
    i=5;
    while(i>=1){
        printf("%d\n",(int)pow(a[i],2));
        i--;
    }
}