#include<stdio.h>

int main(void) {
	int std[] = { 43,29,54,33 };
	int r;
	for (int i = 0; i < 4; i++) {
		r = 1;
		for (int j = 0; j < 4; j++)
			if (std[i] < std[j])
				r++;
		printf("%d, %d\n", std[i], r);
	}
}