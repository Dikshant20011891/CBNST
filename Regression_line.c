#include <math.h>
#include <stdio.h>
int main()
{
    int n, i;
    float x, y, m, c, d;
    float sumx = 0, sumxsq = 0, sumy = 0, sumxy = 0;
    printf("enter the number of observations : ");
    scanf("%d", &n);
    printf("enter values of x and y\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f%f", &x, &y);
        sumx = sumx + x;
        sumxsq = sumxsq + (x * x);
        sumy = sumy + y;
        sumxy = sumxy + (x * y);
    }
    d = n * sumxsq - sumx * sumx;
    m = (n * sumxy - sumx * sumy) / d;
    c = (sumy * sumxsq - sumx * sumxy) / d;
   printf("\nLine Equation y = %fm + %f",m,c);
}