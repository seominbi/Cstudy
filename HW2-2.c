#include <stdio.h>
#pragma warning (disable:4996)
void menu();
void length(int** queue,int first, int* rear, int* QUEUESIZE);
void push(int** queue, int first, int* rear, int* QUEUESIZE);
void pop(int* queue, int* first, int* rear);
void size(int first, int rear);
void empty(int first, int rear);
void front(int* queue, int first, int rear);
void back(int* queue, int first, int rear);

int main() {
	menu();
}

void menu() {
	static int QUEUESIZE = 2;
	static int first = 0, rear = 0;
	int* queue = malloc(sizeof(int) * QUEUESIZE);

	while (1) {
		int num;
		scanf("%d", &num);
		switch (num) {
		case 0:
			return;
		case 1:
			push(&queue, first,&rear, &QUEUESIZE);
			break;
		case 2:
			pop(queue, &first, &rear);
			break;
		case 3:
			size(first,rear);
			break;
		case 4:
			empty(first, rear);
			break;
		case 5:
			front(queue, first, rear);
			break;
		case 6:
			back(queue, first, rear);
			break;
		default:
			printf("선택할 수 없는 메뉴입니다.\n");
		}
	}
}
void length(int** queue,int first, int* rear, int* QUEUESIZE) {
	if ((*QUEUESIZE) == *rear) {		//if queue is full
		int* temp = (*queue);  //old queue
		(*QUEUESIZE) *= 2;   //expand queue size
		(*queue) = malloc(sizeof(int) * (*QUEUESIZE));
		for (int i = 0; i < (*QUEUESIZE) / 2; i++) {
			(*queue)[i] = temp[i];	//copy old queue to expanding queue
		}
		free(temp);	//free old queue
	}
	printf("data의 개수 : ");
	size(first,*rear);
	printf("배열의 크기  : %d\n",*QUEUESIZE);
}
void push(int **queue,int first, int *rear, int *QUEUESIZE) {
	int n;
	scanf("%d", &n);

	(*queue)[(*rear)++] = n;
	length(queue, first, rear, QUEUESIZE);
}
void pop(int* queue, int* first, int* rear) {
	if (*rear == *first) { printf("queue is empty\n"); }
	else {
		queue[(*first)++];
	}
}
void size(int first, int rear) {
	printf("%d\n", rear - first);
}
void empty(int first, int rear) {
	if (rear == first) { printf("True\n"); }
	else { printf("False\n"); }
}
void front(int *queue, int first, int rear) {
	if (first == rear) { printf("queue is empty\n"); }
	else { printf("%d\n", queue[first]); }
}
void back(int* queue, int first, int rear) {
	if (rear == first) { printf("queue is empty\n"); }
	else { printf("%d\n", queue[rear - 1]); }
}