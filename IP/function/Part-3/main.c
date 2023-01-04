#include<stdio.h>
void modifyArray(float num[]);
int main(void){
  float x[5]={2,8,3,9,10};
  modifyArray(x);
  return 0;
}
void modifyArray(float num[]){
  for(int i=0;i<5;i++){
    num[i]=num[i]*110/100;
  }
  for(int j=0;j<5;j++){
    printf(" %.2f ",num[j]);
  }
}
