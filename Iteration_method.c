#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x*x*x + x*x -1;
}

float findValueAt(float x)
{
    return 1/sqrt(1+x);
}

float differentiate(float x)
{
    return 1/2.0 * (pow(1,pow((1+x),3/2.0)));
}

int main()
{
    float x0, x1, x2, err;
    int it = 1;
    printf("Enter the value of x0: ");
    scanf("%f", &x0);
    printf("Enter the allowed of error: ");
    scanf("%f", &err);

    if (fabs(differentiate(x0)) > 1)
    {
        printf("\nThis method cannot be used on this equation");
        return 0;
    }

    do
    {
        x1 = findValueAt(x0);
        if(fabs(x1-x0) < err)
        {
            printf("Total Iterations : %d\troot: %f\n",++it, x1);
            return 0;
        }
        printf("Iteration: %d\troot: %f\n",++it, x1);
        x0 = x1;
    } while(1);

    return 0;
}