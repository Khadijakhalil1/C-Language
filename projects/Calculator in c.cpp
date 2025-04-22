#include <stdio.h>

int main() {
    char op;
    float a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+': printf("%.2f + %.2f = %.2f", a, b, a + b); break;
        case '-': printf("%.2f - %.2f = %.2f", a, b, a - b); break;
        case '*': printf("%.2f * %.2f = %.2f", a, b, a * b); break;
        case '/':
            if (b != 0)
                printf("%.2f / %.2f = %.2f", a, b, a / b);
            else
                printf("Division by zero not allowed.");
            break;
        default: printf("Invalid operator");
    }
    return 0;
}

