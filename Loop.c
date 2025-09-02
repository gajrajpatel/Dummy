#include<stdio.h>
int main(){
   /*for(int i=10 ;i>0; i-- ){
        printf("%d\n", i );
    }*/
  /*int sum =0;
   for(int i =1; i<=5;i++){
    sum =sum+i;
   }
   printf("%d\n",sum);
}*/
int  num=123;
int sum=0;
while(num>0)
{
    int lastdigit=num%10;
    sum =sum+ lastdigit;
    num =num/10;
}
printf("sum of digit = %d",num);
return 0;
}