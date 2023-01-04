#include<stdio.h>
int main (void)
{
  int i;
  char myArr[20];
  
  printf("Enter the word : ");
  scanf("%s",myArr);
  for(i=0;i<20;i++){
    if(myArr[i]<123&&myArr[i]>96){
      myArr[i]='*';
    
    }
  }
    printf("%s",myArr);
  return 0;
}
