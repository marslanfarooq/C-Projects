#include <stdio.h>
#include <unistd.h>

int main()
{
    char operator;
    double number_1, number_2, result;

    printf("\033[1;34mEnter an operator (+, -, *, /):\n\033[0m");
    scanf("%c", &operator);

    printf("\033[1;34mEnter the first number:\n\033[0m");
    scanf("%lf", &number_1);

    printf("\033[1;34mEnter the second number:\n\033[0m");
    scanf("%lf", &number_2);

    for (int i = 0; i < 3; i++)
    {
        printf(".");

        fflush(stdout);
        sleep(1);
    }

    printf("\033[0m\n");

    switch (operator)
    {
        case '+':
            result = number_1 + number_2;
            break;
        case '-':
            result = number_1 - number_2;
            break;
        case '*':
            result = number_1 * number_2;
            break;
        case '/':
            if (number_2 != 0)
            {
                result = number_1 / number_2;
            }
            else
            {
                printf("\033[1;31mError! Division by Zero.\n\033[0m");
                return 0;
            }
            break;
        default:
            printf("\033[1;31mError! Invalid opertaion\n\033[0m");
            return 0;
    }

    printf("\033[1;32m%.2lf %c %.2lf = %.2lf\n\033[0m", number_1, operator, number_2, result);
}
