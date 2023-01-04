# include <stdio.h>
int main(void)
{
       int att[5][5] = {{1, 0, 1, 1, 1}, {1, 1,1,1,1},{1,1,0,1,1},{1,1,1,1,1},{1,1,1,1,0}};
       int count1,count2,count3=0;
	int total=0;
	int array[5];
	for(count1=0;count1<5;count1++){
			  total=0;
              for(count2=0;count2<5;count2++){
                          total=total+att[count1][count2];
                    }
                if(total==5){
                    array[count3]=count1+1;
                    count3++;

                 }

                 

}

printf("students numbers are  :  ");

for(count1=0;count1<count3;count1++){

               printf("%d ",array[count1]);

}

return 0;

}
