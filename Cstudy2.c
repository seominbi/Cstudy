#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int ave=0;
	int score[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
		ave += score[i];
	}
	//ave = ave / 5;

	printf("ЦђБе : %d", ave / 5);
}