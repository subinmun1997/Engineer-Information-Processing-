#include <stdio.h>
int isPrime(int number) {
	int i;
	for (i = 2; i < number; i++) 
		if (number%i==0) //���� number�� 5 �� ��� 5�� 2,3,4�� ������ �� �������� 0�� ������������ �Ҽ��̴�.
			return 0;
		return 1;
}
int main(void) {
	int number = 99, cnt = 0, i;
	for (i = 2; i <= number; i++)
		cnt = cnt + isPrime(i);
	printf("%d�� ���� �ʴ� �Ҽ��� %d�� �Դϴ�. \n", number, cnt);
	return 0;
}