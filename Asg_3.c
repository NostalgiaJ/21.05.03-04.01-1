#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter 3 values: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("%6d\n", a);
	printf("%6d\n", b);
	printf("%6d\n", c);
	printf("--------\n");
	printf("%6d\n", a + b + c);
	printf("%6.1f\n", (float) (a + b + c) / 3);
}
