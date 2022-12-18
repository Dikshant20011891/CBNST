#include<stdio.h>

float fun(float x,float y)
{
    return ((y-x)/(y+x));
}

int main()
{
    printf("Differential Equation : dy/dx = (y-x)/(y+x)\n");
    float x0,y0,h,x;
    float k1,k2,k3,k4;
    int i = 1;
    printf("Enter the value of x , y and h : ");
    scanf("%f%f%f",&x0,&y0,&h);

    printf("Enter the value of x to find y : ");
    scanf("%f",&x);

    while(x0 < x)
    {
        k1 = h*fun(x0,y0);
        k2 = h*fun(x0 + h/2.0,y0 + k1/2.0);
        k3 = h*fun(x0 + h/2.0,y0 + k2/2.0);
        k4 = h*fun(x0 + h,y0 + k3);

        float tmp = (k1 + 2*k2 + 2*k3 + k4)/6.0;

        y0 += tmp;
        x0 += h;

        printf("\nX = %f\t Y%d = %f",x0,i++,y0);
    }
    return 0;
}