#include <stdio.h>
#pragma warning (disable:4996)
#define QUEUESIZE 1000000

int queue[QUEUESIZE] = { 0, };
int first= 0, rear = 0;

void menu();
void push();
void pop();
void size();
void empty();
void front();
void back();

int main()
{
	menu();
}
void menu() {
	while (1) {
		int num;
		scanf("%d", &num);
		switch (num) {
		case 0:
			return;
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			size();
			break;
		case 4:
			empty();
			break;
		case 5:
			front();
			break;
		case 6:
			back();
			break;
		default:
			printf("선택할 수 없는 메뉴입니다.\n");
		}
	}
}
void push() {
	int n;
	scanf("%d", &n);

	if (rear == QUEUESIZE) { printf("queue is full\n"); }
	else {
		queue[rear++] = n;
	}
}
void pop() {
	if (rear == first) { printf("queue is empty\n"); }
	else {
		queue[first++];
	}
}
void size() {
	printf("%d\n", rear-first);
}
void empty() {
	if (rear == first) { printf("True\n"); }
	else { printf("False\n"); }
}
void front() {
	if (first == rear) { printf("queue is empty\n"); }
	else { printf("%d\n", queue[first]); }
}
void back(){
	if (rear == first) { printf("queue is empty\n"); }
	else { printf("%d\n",queue[rear-1]); }
}