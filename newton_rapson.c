#include <stdio.h>
#include <math.h>

float f(float x)
{
    return 3 * x - cos(x) - 1;
}

float diff(float x)
{
    return 3 + sin(x);
}

int main()
{
    int i = 1;
    float x1, x2, x, x0, error;

    printf("\nEquation = 3x - cosx - 1");
    printf("\nEnter the Error : ");
    scanf("%f", &error);

    do
    {
        printf("\nEnter the value of x1 and x2\n");
        scanf("%f%f", &x1, &x2);
        if (f(x1) * f(x2) > 0)
        {
            printf("These values are Invalid\n");
            continue;
        }
        else
        {
            printf("\nRoots Lie between %f and %f\n", x1, x2);
            break;
        }
    } while (1);

    if (fabs(f(x1)) < fabs(f(x2)))
    {
        x0 = x1;
    }
    else
    {
        x0 = x2;
    }

    do
    {
        x = x0 - (f(x0) / diff(x0));

        if (fabs(x - x0) < error)
        {
            printf("Iterations = %d  Roots = %f\n", i, x);
            printf("\nRoot = %f  Total Iterations = %d\n", x, i);
            return 0;
        }
        printf("Iterations = %d  Roots = %f\n", i, x);
        x0 = x;
        i++;

    }while(1);

}