#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	int n;
	scanf("%d", &n);

	char** p = (char **)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		char word[100];
		scanf("%s", word);
		p[i] = (char *)malloc(sizeof(char) * strlen(word) + 1);
		strcpy(p[i], word);
	}

	for (int j = 0; j < n; j++) {
		printf("%s , ", p[j]);
	}
}