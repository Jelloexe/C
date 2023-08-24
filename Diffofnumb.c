#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m;
    float a,b;

    scanf("%d %d", &n, &m);
    scanf("%f %f", &a, &b);

int d=n+m;
int f=n-m;
float e=a+b;
float r=a-b;

printf("%d %d\n",d,f);
printf("%0.1f %0.1f\n",e,r);
return 0;
}