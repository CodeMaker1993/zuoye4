#include<stdio.h>
#include<math.h>
int main() {

	int sum=0;
		int a;
		int n = 0;
		int i;

	scanf_s("%d" , &a);
 
	for (i = 1; i < 100000; i*=10) {
		n = n + a * i;
		sum = sum + n;

	}
	printf("ǰ��������֮��Ϊ%d", sum);

	return 0;
}