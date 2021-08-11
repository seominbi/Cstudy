#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

typedef struct linkedlist {
	int n;
	struct linkedlist* nextNode;
}linkedlist;

linkedlist* headNode = NULL;
linkedlist* tailNode = NULL;

void insertX();
void insetX();
void printALL();
void deleteX();
void deleteN();
void searchN();
void menu();

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
			insertX();
			break;
		case 2:
			insetX();
			break;
		case 3:
			printALL();
			break;
		case 4:
			deleteX();
			break;
		case 5:
			deleteN();
			break;
		case 6:
			searchN();
			break;
		default:
			printf("선택할 수 없는 메뉴입니다.\n");
		}
	}
}
//1. insert X : X 를 linked list 맨 뒤에 추가한다. 
void insertX() {
	int num;
	scanf("%d", &num);

	linkedlist* newNode =(linkedlist*) malloc(sizeof(linkedlist)*1);
	newNode->n = num;
	newNode->nextNode = NULL;
	if (headNode == NULL) { headNode = tailNode = newNode; }
	else {
		tailNode->nextNode = newNode;
		tailNode = newNode;
	}
}
//2. inset X  N : x 를 num 오른쪽에 추가한다. (단, N이 없다면 없다고 출력)
void insetX() {
	int num, x;
	scanf("%d %d", &x, &num);
	
	linkedlist* cur = headNode;
	while (cur != NULL&&cur->n != num)
	{
		cur = cur->nextNode;
	}
	if (cur == NULL) {
		printf("%d는 존재하지 않습니다.\n", num);
		return;
	}
	linkedlist* newNode = (linkedlist*)malloc(sizeof(linkedlist) * 1);
	newNode->n = x;
	newNode->nextNode = cur->nextNode;
	cur->nextNode = newNode;

	if (cur == tailNode) { tailNode = newNode; }
}
//3. print ALL : Linked list 에 있는 모든 data를 출력한다.
void printALL() {
	linkedlist* cur = headNode;
	while (cur != NULL)
	{
		printf("%d -> ", cur->n);
		cur = cur->nextNode;
	}
	printf("NULL\n");
}
//4. Delete X : Linked List 맨 뒤 data를 삭제한다. 
void deleteX() {
	if (headNode == NULL) { return; }
	else if (headNode->nextNode == NULL) {
		free(headNode);
		headNode = tailNode = NULL;
		return;
	}

	linkedlist* pre=headNode;
	while (pre->nextNode->nextNode != NULL)
		pre = pre->nextNode;

	free(tailNode);

	pre->nextNode = NULL;
	tailNode = pre;

}
//5. Delete N : linked list 안에 있는 N을 삭제한다. 
void deleteN(){
	int deleteNum;
	scanf("%d",&deleteNum);

	linkedlist* temp = headNode;
	linkedlist* prev=headNode;

    // If temp is headNodehead
    if (temp != NULL && temp->n == deleteNum) {
        headNode = headNode->nextNode; // Changed head
        free(temp); // free old head
        return;
    }
 
    while (temp != NULL && temp->n != deleteNum) {
        prev = temp;
        temp = temp->nextNode;
    }
 
    // If deletenum was not present
    if (temp == NULL)
        return;
	//if temp is tailNode
	if (temp->nextNode == NULL)
		tailNode = prev;
    prev->nextNode = temp->nextNode;
 
    free(temp); // Free memory
}
//6. Search N : linked list 안에 N이 있다면 1 없다면 0을 출력한다. 
void searchN(){
	int searchNum;
	scanf("%d", &searchNum);

	linkedlist* cur= headNode;
	while (cur != NULL && cur->n != searchNum)
	{
		cur = cur->nextNode;
	}

	if (cur != NULL) { printf("1\n"); }
	else { printf("0\n"); }
}