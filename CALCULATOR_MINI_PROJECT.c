#include<stdio.h>
#include<math.h>

int calculator(int a);

int main(){
    int a;

    printf("ENTER 1-ADDITION, 2-SUBTRACTION, 3-MULTIPLICATION, 4-DIVISION, 5-POWER, 6-PERCENTAGE, 7-MODULO , 8-FACTORIAL :- ");
    scanf("%d",&a);

    calculator(a);
}

int calculator(int a){
    float b,c; 
    int d,fact=1;
    
    if(a==8){
        printf("ENTER YOUR FACTORIAL NUMBER :- ");
        scanf("%d",&d);
        while(d>0){
            fact=fact*d;
            d--;
        }
        printf("%d",fact);
    }
    else if(a==1 || a==2 || a==3 || a==4 || a==5 || a==6){
        printf("ENTER YOUR FIRST NUMBER :- ");
        scanf("%f",&b);

        printf("ENTER YOUR SECOND  NUMBER :- ");
        scanf("%f",&c);

        if(a==1){
            printf("%f\n",b+c);
        }
        else if(a==2){
            printf("%f\n",b-c);
        }
        else if(a==3){
            printf("%f\n",b*c);
        }
        else if(a==4){
            if(c==0){
                printf("CAN NOT DIVIDE BY 0 XXXXX");
            }
            else{
                printf("%f\n",b/c);
            }
        }
        else if(a==5){
            printf("%f\n",pow(b,c));
        }           
        else if(a==6){
            printf("%f\n",(b/c)*100);
        } 
        }
        else if(a==7){
            int x,y;
            printf("ENTER YOUR FIRST NUMBER :- ");
            scanf("%d",&x);
            printf("ENTER YOUR SECOND NUMBER :- ");
            scanf("%d",&y);
            printf("%d\n", x%y);        
        }
        else{
            printf("INVALID INPUT :( \n");     
    }
}