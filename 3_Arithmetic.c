#include <stdio.h>
int main() {
    char operator;
    double number1, number2;
    printf("Enter an operator (+, -, *,): \n");
    scanf("%c", &operator);
    printf("Enter first number: \n");
    scanf("%lf", &number1);
	printf("Enter second number: \n");
	scanf("%lf", &number2);
    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", number1, number2, number1+number2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", number1, number2, number1-number2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", number1, number2, number1*number2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", number1, number2, number1/number2);
        break;
    default:
        printf("Error! Wrong operator");
    }

    return 0;
}
