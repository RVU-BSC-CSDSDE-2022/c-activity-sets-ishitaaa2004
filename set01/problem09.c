#include <stdio.h>

int main()
{
	int n;
	printf("Enter your number:");
	scanf("%d", &n);
	
	int s;
	for(s = 1; s*s <= n; s++);
	s--;
	
	double x;
	for(double d = 0.001; d < 1.0; d+= 0.001)
	{
		x = (double)s + d;
		if((x*x > (double)n))
		{
			x -= 0.001;
			break;
		}
	}
	
	printf("square root is %.3lf\n", x);
	
	return 0;
}