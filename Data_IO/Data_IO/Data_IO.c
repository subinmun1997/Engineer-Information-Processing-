#include <stdio.h>
int main(void) {
	printf("%-8.2f\n", 200.2);
	printf("%8.2f\n", 200.2);
	printf("%d\n", 2543);
	printf("%3d\n", 2543);
	printf("%6d\n", 2543);
	printf("%-6d\n", 2543);
	printf("%06d\n", 2543);
	printf("%f\n", 245.2555);
	printf("%.3f\n", 245.2555);
	printf("%8.2f\n", 245.2555);
	printf("%e\n", 25.43);
	printf("%.3s\n", "happy day");
	printf("%3s\n", "happy day");
	printf("%8.6s\n", "happy day");
	printf("%-8.6s\n", "happy day");

	return 0;
}