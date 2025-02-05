#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    

    scanf("%lf %lf", &num1, &num2);
    scanf(" %c", &op);


    switch (op) {
        case '+':
            printf(" %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("%.2lf\n", num1 - num2);
            break;
        case '*':
            printf(" %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf(" %.2lf\n", num1 / num2);
            else
                printf("Error\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
