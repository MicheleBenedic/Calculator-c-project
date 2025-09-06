#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    double result;
    double number;
    char operator_char;

    // Welcome to the user
    printf(" \t\t CLI CALCULATOR APPLICATION\n");
    printf(" \t   A simple math calculator written in C\n");
    printf(" Useful for simple... \t\t\t +,-,*,/,module (m)\n");
    printf(" And not so simple operations! \t\t ^, v, l\n\n");

    // === 1. FIRST INPUT ===
    printf("Enter a starting number: ");
    scanf("%lf", &result);

    // === 2. MAIN LOOP ===
    do
    {
        // === 3. OPERATOR INPUT ===
        printf("Enter an operator (+, -, *, /, ^, m, v, l) or '=' to see the result: ");
        scanf(" %c", &operator_char);

        // Check to exit the loop.
        if (operator_char == '=')
        {
            printf("\nFinal result: %.2f\n\n", result);
            return 0;
        }

        // === 4. OPERATION LOGIC ===
        // We use a switch to handle the different cases.
        switch (operator_char)
        {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
        case 'm':
            // For these operators, we need a second number.
            printf("Enter a number: ");
            scanf("%lf", &number);
            break;
        case 'v':
        case 'l':
            // For these operators, we don't need a second number.
            // The operation is performed directly on the current 'result'.
            break;
        default:
            printf("Invalid operator! The calculation has not been updated.\n");
            // If the operator is invalid, we skip the rest of the loop and start over.
            continue;
        }

        // === 5. CALCULATION EXECUTION ===
        switch (operator_char)
        {
        case '+':
            result += number;
            break;
        case '-':
            result -= number;
            break;
        case '*':
            result *= number;
            break;
        case '/':
            if (number == 0)
            {
                printf("Error: Cannot divide by zero.\n");
            }
            else
            {
                result /= number;
            }
            break;
        case '^':
            // pow() function from <math.h> library for power.
            result = pow(result, number);
            break;
        case 'm':
            // fmod() function from <math.h> library for the modulus with decimals.
            result = fmod(result, number);
            break;
        case 'v':
            // sqrt() function from <math.h> library for square root.
            if (result < 0)
            {
                printf("Error: Cannot calculate the square root of a negative number.\n");
            }
            else
            {
                result = sqrt(result);
            }
            break;
        case 'l':
            // log() function from <math.h> library for the natural logarithm.
            if (result <= 0)
            {
                printf("Error: The logarithm of a non-positive number is not defined.\n");
            }
            else
            {
                result = log(result);
            }
            break;
        }

        // === 6. CURRENT STATE ===
        printf("Current result: %.2f\n\n", result);

    } while (1);

    return 0;
}