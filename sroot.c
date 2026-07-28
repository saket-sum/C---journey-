#include<stdio.h>
#include<math.h>

float sroot(float a);

int main(){
    float a ;

    printf("ENTER YOUR NUMBER :- ",a);
    scanf("%f",&a);

    sroot(a);
}

float sroot(float a){
    printf("SQUARE ROOT OF YOUR NUMBER IS :- %f",pow(a,0.5));
}