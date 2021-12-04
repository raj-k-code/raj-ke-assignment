//Find roots of a quadratic equation using switch case.
#include <stdio.h>
#include <math.h>
int calculate()
{
    float a, b, c;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);

    float root1, root2, imaginary;
    float d;
    d = (b * b) - (4 * a * c);
    switch (d> 0)
    {
    case 1:
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Two distinct and real roots exists: %.2f and %.2f",
               root1, root2);
        break;

    case 0:
        switch (d < 0)
        {
        case 1:
            root1 = root2 = -b / (2 * a);
            imaginary = sqrt(-d) / (2 * a);

            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                   root1, imaginary, root2, imaginary);
            break;

        case 0:
            root1 = root2 = -b / (2 * a);
            printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
            break;
        }
    }
}
int main()
{
    calculate();
    return 0;
}
