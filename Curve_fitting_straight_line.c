#include<stdio.h>
int main()
{
    int n;
    float s1=0,s2=0,s3=0,s4=0,a,b;

    printf("Enter no. of observations\n");
    scanf("%d",&n);
    float x[n],y[n],equation[2][3];
    printf("Enter values of x and y\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f%f",&x[i],&y[i]);
    }

    for(int i=0;i<n;i++)
    {
        s1=s1+x[i];
        s2=s2+y[i];
        s3=s3+x[i]*y[i];
        s4=s4+x[i]*x[i];
    }

    equation[0][0]=n;
    equation[0][1]=s1;
    equation[0][2]=s2;
    equation[1][0]=s1;
    equation[1][1]=s4;
    equation[1][2]=s3;


    int ratio=equation[1][0]/equation[0][0];
    for(int i=0;i<3;i++)
        equation[1][i]=equation[1][i]-ratio*equation[0][i];


    b = equation[1][2]/equation[1][1];
    a = (equation[0][2] - equation[0][1]*b ) / equation[0][0];

    printf("\nIntercept = %.2f and Slope = %.2f\n\n",a,b);
    printf("Equation of The line: y= %.2f + %.2fx",a,b);
    return 0;
}