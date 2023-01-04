#include<stdio.h>
int main(void)
{
  int marks[10]={80,30,23,78,98,47,39,40,10,89};
  int count=0,i;
  for(i=0;i<10;i++){
    if(marks[i]>0 && marks[i]<100){
      count++;
    }
  }
  if(count==10){
    printf("The marks are valid");
  }
  return 0;
}
