#include<stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    if (n%2 == 0)
    printf("even\n");
    else
    printf("odd\n");
    return 0;
}


/*int n;
scanf("%d",&n);
if (n == 0) printf("zero\n");
else if (n>0) printf("positive\n");
else printf("negative\n");
return 0;
}*/


/*int a, b;
scanf("%d %d",&a, &b);
if (a>b) printf("%d is larger\n" , a);
else if( b>a) printf("%d is larger\n" , b);
else printf("equal\n");
return 0;
}*/


/*int a, b, c;
scanf("%d %d %d", &a ,&b ,&c);
if (a>=b && a >= c) printf("%d\n",a);
else if (b>=a && b>= c) printf("%d\n",b);
else printf("%d\n",c);
return 0;
}*/


/*int y;
scanf ("%d", &y);
if ((y% 400 == 0) || (y % 4 == 0 && y % 100 !=0))
printf("leap year\n");
else 
printf("not Leap year\n");
return 0;
}*/


/*int marks;
scanf("%d" , &marks);
if (marks>= 90) printf("grade: A\n");
{printf("88\n;");
return 0;
}
if (marks >= 90) printf("grade: A\n");
else if(marks >= 75) printf("grade: B\n");
else if(marks >= 50) printf("grade: C\n");
else if(marks >= 33) printf("grade: D\n");
else printf("grade: F\n");
if (marks >= 33) printf("pass\n");
else printf("fail\n");
return 0;
}*/