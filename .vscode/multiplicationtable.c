#include<stdio.h>
int main(){
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    printf("multiplication table of %d:\n",n);
    for (i=1;i<=10;i++){
        printf("%d x %d=%d\n",n,i,n*i);
    }
    return 0;
}