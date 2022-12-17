#include<stdio.h>

float fun(float x)
{
    return (1/(1+x*x));
}

int main()
{
    int n,pos;
    float i,a,b,sum,h;

    printf("Enter the values of a and b\n");
    scanf("%f%f",&a,&b);
    printf("Enter the number of intervals : ");
    scanf("%d",&n);

    printf("Equation y = 1/(1 + x^2)\n");
    h = (b-a)/(n);

    sum = fun(a) + fun(b);
    pos = 1;
    for(i=a+h;i<b;i+=h)
    {
        if(pos%2 == 0)
        {
            sum += 2*fun(i);
        }
        else{
            sum += 4*fun(i);
        }
        pos++;
    }

    sum = (h*sum)/3;
    printf("\nValue of Integral = %f",sum);
}