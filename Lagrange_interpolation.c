#include<stdio.h>

int main()
{
    int n;
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    float x[n],y[n],sum,k;

    printf("Enter the value of x and y\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f%f",&x[i],&y[i]);
    }

    printf("Enter to value of x to calculate y : ");
    scanf("%f",&k);

    sum = 0;
    for(int i=0;i<n;i++)
    {
        float nu=1,de=1; 
        for(int j = 0;j < n ;j++)
        {
            if(i!=j)
            {
                nu *= (k-x[j]);
                de *= (x[i] - x[j]);
            }
        }

        sum += ((nu/de)*y[i]);
    }

    printf("\n X = %f Y = %f\n",k,sum);
    return 0;
}