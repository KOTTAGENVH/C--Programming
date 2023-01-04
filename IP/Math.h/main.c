#include<stdio.h>
#include<math.h>
struct center{
  int x,y;
}C1,C2;
int main(void){
  C1.x=10;
  C2.x=12;
  C1.y=15;
  C2.y=18;
printf("%.2f",sqrt(pow((C1.x-C2.x),2)+pow((C1.y-C2.y),2)));
return 0;
}
