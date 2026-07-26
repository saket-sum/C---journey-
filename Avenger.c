#include<stdio.h>

int main(){
  int character;
  printf("ENTER NUMBER BTW 1-3 FOR YOUR AVENGER :) ");
  scanf("%d",&character);
  switch(character){
    case 1 :printf("WE ARE VENOM");
          break;
    case 2 :printf("HOW DARE U CHOOSE ME , ANYWAY AVENGERS ASSE..");
          break;
    case 3 :char mask;
    printf("TYPE O FOR LOCKED IN WOLVERNINE OR TYPE C FOR COMFORTABLE WOLVERINE :- ");
    scanf(" %c",&mask);
      switch(mask){
        case 'o' : printf("LOCKED IN WOLVERINE DEPLOYED");
            break;
        case 'c' : printf("COMFORTABLE WOLVERINE DEPLOYED");
            break;
    }
          break;
  }
}
