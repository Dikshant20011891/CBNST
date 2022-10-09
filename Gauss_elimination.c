#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the order of matrix : ");
    scanf("%d", &n);
    float a[n][n + 1];

    printf("\nEnter the Matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            float ratio = a[j][i] / a[i][i];
            for (int k = 0; k < n + 1; k++)
            {
                a[j][k] = a[j][k] - (ratio * a[i][k]);
            }
        }
    }

    printf("\nUpper Triangular Matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%0.2f  ", a[i][j]);
        }
        printf("\n");
    }

    float value[n];
    value[n - 1] = a[n - 1][n] / a[n - 1][n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        float sum = 0;
        for (int j = i + 1; j < n; j++)
            sum = sum + a[i][j] * value[j];
        value[i] = (a[i][n] - sum) / a[i][i];
    }
    
    printf("\nValues of unknowns are:\n");
    for (int i = 0; i < n; i++)
        printf("Value %d = %0.2f\n", i+1, value[i]);
    return 0;
}