#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function declarations
void basic_operations();
void trigonometric_functions();
void advanced_operations();
void degree_to_radian();
void radian_to_degree();
void clear_screen();

int main() {
    int choice;

    while (1) {
        printf("\n===== SCIENTIFIC CALCULATOR =====\n");
        printf("1. Basic Arithmetic Operations (+, -, *, /, %%)\n");
        printf("2. Trigonometric Functions (sin, cos, tan, etc.)\n");
        printf("3. Advanced Operations (sqrt, pow, log, exp, factorial)\n");
        printf("4. Convert Degrees to Radians\n");
        printf("5. Convert Radians to Degrees\n");
        printf("6. Clear Screen\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                basic_operations();
                break;
            case 2:
                trigonometric_functions();
                break;
            case 3:
                advanced_operations();
                break;
            case 4:
                degree_to_radian();
                break;
            case 5:
                radian_to_degree();
                break;
            case 6:
                clear_screen();
                break;
            case 0:
                printf("Exiting Calculator. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

void basic_operations() {
    double a, b;
    char op;
    printf("Enter expression (e.g., 5 + 2): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result = %.2lf\n", a + b);
            break;
        case '-':
            printf("Result = %.2lf\n", a - b);
            break;
        case '*':
            printf("Result = %.2lf\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %.2lf\n", a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        case '%':
            printf("Result = %d\n", (int)a % (int)b);
            break;
        default:
            printf("Invalid operator!\n");
    }
}

void trigonometric_functions() {
    int choice;
    double angle;
    printf("\n--- Trigonometric Functions ---\n");
    printf("1. sin\n2. cos\n3. tan\n4. asin\n5. acos\n6. atan\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter angle in radians: ");
    scanf("%lf", &angle);

    switch (choice) {
        case 1:
            printf("sin(%.2lf) = %.4lf\n", angle, sin(angle));
            break;
        case 2:
            printf("cos(%.2lf) = %.4lf\n", angle, cos(angle));
            break;
        case 3:
            printf("tan(%.2lf) = %.4lf\n", angle, tan(angle));
            break;
        case 4:
            printf("asin(%.2lf) = %.4lf radians\n", angle, asin(angle));
            break;
        case 5:
            printf("acos(%.2lf) = %.4lf radians\n", angle, acos(angle));
            break;
        case 6:
            printf("atan(%.2lf) = %.4lf radians\n", angle, atan(angle));
            break;
        default:
            printf("Invalid choice!\n");
    }
}

void advanced_operations() {
    int choice, i;
    double num, base, power;
    printf("\n--- Advanced Operations ---\n");
    printf("1. Square Root\n2. Power (x^y)\n3. Log10\n4. Natural Log (ln)\n5. Exponential (e^x)\n6. Factorial\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter number: ");
            scanf("%lf", &num);
            if (num >= 0)
                printf("sqrt(%.2lf) = %.4lf\n", num, sqrt(num));
            else
                printf("Invalid input for square root!\n");
            break;
        case 2:
            printf("Enter base and power: ");
            scanf("%lf %lf", &base, &power);
            printf("%.2lf ^ %.2lf = %.4lf\n", base, power, pow(base, power));
            break;
        case 3:
            printf("Enter number: ");
            scanf("%lf", &num);
            if (num > 0)
                printf("log10(%.2lf) = %.4lf\n", num, log10(num));
            else
                printf("Invalid input for log10!\n");
            break;
        case 4:
            printf("Enter number: ");
            scanf("%lf", &num);
            if (num > 0)
                printf("ln(%.2lf) = %.4lf\n", num, log(num));
            else
                printf("Invalid input for natural log!\n");
            break;
        case 5:
            printf("Enter exponent: ");
            scanf("%lf", &num);
            printf("e^%.2lf = %.4lf\n", num, exp(num));
            break;
        case 6:
            printf("Enter an integer: ");
            scanf("%lf", &num);
            if (num < 0 || floor(num) != num)
                printf("Factorial is not defined for negative or non-integer values.\n");
            else {
                long long fact = 1;
                for (i = 1; i <= (int)num; i++)
                    fact *= i;
                printf("Factorial of %.0lf is %lld\n", num, fact);
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
}

void degree_to_radian() {
    double degree;
    printf("Enter angle in degrees: ");
    scanf("%lf", &degree);
    printf("Radians = %.4lf\n", degree * (M_PI / 180.0));
}

void radian_to_degree() {
    double radian;
    printf("Enter angle in radians: ");
    scanf("%lf", &radian);
    printf("Degrees = %.4lf\n", radian * (180.0 / M_PI));
}

void clear_screen() {
    // Works in most terminal environments
    system("clear || cls");
}
