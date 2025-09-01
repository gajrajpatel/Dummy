#include<stdio.h>

int main(){
    int a=5;
    int b=3;
    int sum=a++ + ++b + --b + b-- + ++a;
    
    printf("%d",sum);



    int a=10;
    int b=21;
    if(a==10 || b>25){
        printf("hello");
   /}
    else{printf("hii");
  }
/*  int a=76;
  int m=78;
     if(a>75 && m>75){
        printf("A");
    }else if (a>75 && m>65 && m<75){
        printf("B");
    }else if (m>75 && m<65 && m>50){
        printf("C");
    }else if (m>75 && m<50 && m>33){
        printf("D");
    }*/
    

    
  
}