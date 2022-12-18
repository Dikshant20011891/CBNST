#include<stdio.h>

float fun(float x,float y)
{
    return ((y-x)/(y+x));
}

int main()
{
    printf("Differential Equation : dy/dx = (y-x)/(y+x)\n");
    float x0,y0,h,x;
    printf("Enter the value of x , y and h : ");
    scanf("%f%f%f",&x0,&y0,&h);

    printf("Enter the value of x to find y : ");
    scanf("%f",&x);
    int i = 1;
    while(x0 < x)
    {
        printf("X = %f \t y%d = %f \n",x0,i++,y0);
        float tmp = h*fun(x0,y0);
        y0 += tmp;
        x0 += h;
    }
    return 0;
}