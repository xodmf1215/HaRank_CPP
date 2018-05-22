#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

void update(int *a, int *b) {
	// Complete this function
	int c;
	c = *a;
	*a = *a + *b;
	if (c > *b)
		*b = c - *b;
	else
		*b = *b - c;
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);

	return 0;
}