#include <stdio.h>
#include <math.h>

float findValue(float x)
{
    return 3 * x + sin(x) - exp(x);
}

float find(float x1, float x2)
{
    return (x1+x2)/2.0;
}

int main()
{
    int i = 1;
    float x1, x2, x3, x, error;

    printf("\nEquation = 3x + sinx - e^x");
    printf("\nEnter the error : ");
    scanf("%f", &error);

    do
    {
        printf("\nEnter the value of x1 and x2\n");
        scanf("%f%f", &x1, &x2);
        if (findValue(x1) * findValue(x2) > 0)
        {
            printf("Roots are Invalid\n");
            continue;
        }
        else
        {
            printf("Roots Lie between %f and %f\n", x1, x2);
            break;
        }
    } while (1);

    x = find(x1, x2);

    do
    {
        if (findValue(x) * findValue(x1) < 0)
            x2 = x;
        else
            x1 = x;
        printf("Iterations = %d  Root=%f\n", i, x);
        x3 = find(x1, x2);
        if (fabs(x3 - x) < error)
        {
            printf("Iterations = %d  Root=%f\n", ++i, x3);
            printf("\nRoot = %f  Total Iterations = %d", x3, i);
            return 0;
        }
        x = x3;
        i++;
    } while (1);

    return 0;
}