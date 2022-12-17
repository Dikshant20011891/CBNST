#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n,itr;
    float ratio;
    printf("Enter order of matrix : ");
    scanf("%d", &n);
    printf("\nEnter no. of iterations : ");
    scanf("%d", &itr);
    float a[n][n + 1];
    float values[n];

    printf("\nEnter the Augmented Matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
            scanf("%f", &a[i][j]);
    }

    for (int i = 0; i < n; i++)
        values[i] = 0;
    
    int x;
    for (x = 1; x <= itr; x++)
    {
        for (int i = 0; i < n; i++)
        {
            float sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                    sum += a[i][j] * values[j];
            }

            values[i] = (a[i][n] - sum) / a[i][i];
        }

        printf("\nIteration %d :-\n", x);
        for (int i = 0; i < n; i++)
            printf("value[%d]=%f\t", i + 1, values[i]);
    }

    return 0;
}
