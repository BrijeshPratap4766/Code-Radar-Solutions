  #include <stdio.h>

int main() {
    char op;
    double a, b;

    
    scanf("%lf %lf", &a, &b);
    scanf("%c",&op);
    if (op == '+')
        printf(" %.2lf\n", a + b);
    else if (op == '-')
        printf(" %.2lf\n", a - b);
    else if (op == '*')
        printf("%.2lf\n", a * b);
    else if (op == '/' && b != 0)
        printf(" %.2lf\n", a / b);
    else
        printf("Error");

    return 0;
}
 