#include<stdio.h>

float fun(float x)
{
    return (1/(x*x*x + 10));
}

int main()
{
    int n;
    float a,b,i,h,sum = 0;

    printf("Enter the value of a & b : ");
    scanf("%f%f",&a,&b);

    printf("Enter the no. of points : ");
    // These are number of points
    // that why we are doing n-1 while calculating h
    scanf("%d",&n);

    printf("\nEquation : y = 1/( x^3 + 10)\n");
    h = (b-a)/(n-1);

    sum = fun(a) + fun(b);

    for(i = a+h;i<b;i+=h)
    {
        sum += (2*fun(i));
    }

    sum = (h*sum)/2;
    printf("Value of integral is %f",sum);
    return 0;
}