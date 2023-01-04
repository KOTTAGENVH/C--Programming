#include<stdio.h>
int main(void){
  for(int i=0;i<5;i++){
    for(int j=i;j<5;j++){
      printf ("*");
    }
    printf("\n");
  }
  for(int i=0;i<=6;i++){
    for(int j=0;j<i;j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
