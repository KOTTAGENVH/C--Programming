#include<stdio.h>
void changeArray(int num[]);
int main(void)
{
  int A[5]={2,8,3,9,10};
changeArray(A);
return 0;
}
void changeArray(int num[]){
  for(int i=0;i<5;i++){
    num[i]=num[i]+4;
  }
  for(int j=0;j<5;j++){
    printf(" %d ",num[j]);
  }
}
