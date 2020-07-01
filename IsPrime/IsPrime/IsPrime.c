#include <stdio.h>
int isPrime(int number) {
	int i;
	for (i = 2; i < number; i++) 
		if (number%i==0) //만약 number가 5 일 경우 5는 2,3,4로 나눴을 때 나머지로 0이 나오지않으니 소수이다.
			return 0;
		return 1;
}
int main(void) {
	int number = 99, cnt = 0, i;
	for (i = 2; i <= number; i++)
		cnt = cnt + isPrime(i);
	printf("%d를 넘지 않는 소수는 %d개 입니다. \n", number, cnt);
	return 0;
}