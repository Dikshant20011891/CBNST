#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float t_val,a_val;
	printf("Enter the true value and Approx value\n");
	scanf("%f %f",&t_val,&a_val);
	
	float abs_err = fabs(t_val - a_val);
	float rel_err = abs_err/t_val;
	float per_err = rel_err * 100;
	
	printf("\nAbsolute Error = %f",abs_err);
	printf("\nRelative Error = %f",rel_err);
	printf("\nPercentage Error = %f \n",per_err);
	
}
