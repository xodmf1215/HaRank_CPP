#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<cstdio>
using namespace std;

int main()
{
	int a;
	long b;
	char c;
	float d;
	double e;
	
	scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
	printf("%d\n", a);
	printf("%ld\n", b);
	printf("%c\n", c);
	printf("%.3f\n", d);
	printf("%.9lf\n", e);
}