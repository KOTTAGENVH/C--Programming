#include<stdio.h>
int main(void){
  for(int i=1;i<=7;i++){
    for(int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
  for(int i=1;i<=6;i++){
    for(int j=i;j<=7;j++){
      if(i==2||i==4||i==6){
        i+=1;
      }
      else{
        printf("*");
      }
    }
    printf("\n");
  }
  return 0;
}
