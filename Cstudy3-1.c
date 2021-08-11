#include <stdio.h>
#include <stdlib.h>

//구조체 정의 
typedef struct S
{
    int a;
    char c;
}S;

//링크드 리스트 노드
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* head = NULL;
Node* end = NULL;

int main()
{
    //구조체 선언
    S s;
    s.a = 1;
    s.c = 'c';

    //구조체 배열 
    int arr[10];
    S sarr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        sarr[i].a = i;
        sarr[i].c = i + '0';
    }

    //구조체 포인터
    S* ptr = (S*)malloc(sizeof(S) * 1);
    ptr->a = 1;
    ptr->c = 'a';

    // ** 끝에는 NULL 있어야함
    //첫 노드 추가
    Node* tmp = (Node*)malloc(sizeof(Node) * 1);
    tmp->data = 1;
    tmp->next = NULL;
    head = tmp;

    //노드 연결; 
    Node* tmp1 = (Node*)malloc(sizeof(Node) * 1);
    tmp1->data = 2;
    tmp1->next = NULL;
    head->next = tmp1;

    Node* cur = head;
    while (cur != NULL)
    {
        printf("%d \n", cur->data);
        cur = cur->next;
    }

    while (cur->next != NULL)
    {
        printf("%d \n", cur->data);
        cur = cur->next;
    }

}
