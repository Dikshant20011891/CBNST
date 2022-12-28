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
        for (int j = 0; j < n; j++)
        {
            if(i!=j)
            {
                float ratio = a[j][i] / a[i][i];
            for (int k = 0; k < n + 1; k++)
            {
                a[j][k] = a[j][k] - (ratio * a[i][k]);
            }
            }
        }
    }

    printf("\nIntermediate Matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%0.2f  ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nValues of unknowns are:\n");
    for (int i = 0; i < n; i++)
        printf("Value %d = %0.2f\n",i+1,a[i][n]/a[i][i]);

    return 0;
}