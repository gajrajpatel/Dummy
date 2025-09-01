/*#include<stdio.h>
int main (){
  int a=5;
  if(a<5){
    printf("hello");
    printf("byy");
  }
  else
  printf("hii");
}*/


/*#include <stdio.h>

int main() {
    char op;
    int choice;

    printf("Enter an operator (1, 2, 3, /): ");
    scanf(" %c", &op);   // Note: space before %c to ignore newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(op) {
        case '2':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '3':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '4':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '5':
            if(num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;*/
    /*#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("Enter an operator (2, 3, 4, /): ");
    scanf(" %c", &op);   // Note: space before %c to ignore newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}*/

#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (op == '+')
        printf("Result = %d\n", a + b);
    else if (op == '-')
        printf("Result = %d\n", a - b);
    else if (op == '*')
        printf("Result = %d\n", a * b);
    else if (op == '/')
        printf("Result = %d\n", a / b);
    else
        printf("Invalid operator\n");

    return 0;
}

