#include <stdio.h>

int main(void) {

	int a;
	int b;
	int c;

	a = 13;
	b = 42;
	c = a;
	printf("Before: a: %d, b: %d, c: %d\n", a, b, c);

	a = b;
	b = c;
	c = 5;
	printf("After: a: %d, b: %d, c: %d\n", a, b, c);

	return 0;
}
