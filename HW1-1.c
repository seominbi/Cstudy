#include <stdio.h>
#pragma warning (disable:4996)

void menu();
void push();
void pop();
void size();
void empty();
void peek();

int stack[1000000] = { 0, };
int top = -1;

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
			peek();
			break;
		default:
			printf("선택할 수 없는 메뉴입니다.\n");
			break;
		}
	}
}
void push() {
	int n;
	scanf("%d", &n);

	stack[++top]=n;
}
void pop() {
	if (top == -1) { printf("stack is empty\n"); }
	else {
		stack[--top];
	}
}
void size() {
	printf("%d\n", top + 1);
}
void empty() {
	if (top == -1) { printf("True\n"); }
	else { printf("False\n"); }
}
void peek() {
	if (top == -1) { printf("stack is empty\n"); }
	else { printf("%d\n", stack[top]); }
}