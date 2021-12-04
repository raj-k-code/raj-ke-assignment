// create a simple Caculater using switch
#include <stdio.h>
void calculator(){
    char op;
    int first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%d %d", &first, &second);

     switch (op)
    {
    case '+':
        printf("%d + %d = %d", first, second, first + second);
        break;
    case '-':
        printf("%d - %d = %d", first, second, first - second);
        break;
    case '*':
        printf("%d * %d = %d", first, second, first * second);
        break;
    case '/':
        printf("%d / %d = %d", first, second, first / second);
        break;
    default:
        printf("Error! operator is not correct");
    }
}
int main()
{
    calculator();
    return 0;
}

