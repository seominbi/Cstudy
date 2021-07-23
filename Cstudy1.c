#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int array[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
	}
	int num;
	scanf("%d", &num);

	int cnt = 0;
	for (int j = 0; j < 5; j++) {
		if (array[j] == num) {
			cnt++;
		}
	}

	printf("일치하는 개수 : %d\n", cnt);
}