#include <stdio.h>

int main() {
    int a, b, choice_int; 
    char choice;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &choice); // space before %c to avoid newline issue

    switch (choice) {
        case '+': {
            int n = a + b;
            printf("The sum is %d\n", n);
            break;
        }
        case '-': {
            int m = a - b;
            printf("The difference is %d\n", m);
            break;
        }
        case '*': {
            int p = a * b;
            printf("The product is %d\n", p);
            break;
        }
        case '/': {
            if (b != 0) {
                int k = a / b;
                printf("The quotient is %d\n", k);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        }
        default:
            printf("Error: Invalid choice\n");
    }

    return 0;
}
	
