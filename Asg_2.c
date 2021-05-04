#include <stdio.h>

int main()
{
	double num;
	printf("Enter real num.(double): ");
	scanf("%lf", &num);
	printf("%.3f * 1/2 = %.2f\n", num, num / 2);

}
