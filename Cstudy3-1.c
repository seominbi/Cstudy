#include <stdio.h>
#include <stdlib.h>

//����ü ���� 
typedef struct S
{
    int a;
    char c;
}S;

//��ũ�� ����Ʈ ���
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* head = NULL;
Node* end = NULL;

int main()
{
    //����ü ����
    S s;
    s.a = 1;
    s.c = 'c';

    //����ü �迭 
    int arr[10];
    S sarr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        sarr[i].a = i;
        sarr[i].c = i + '0';
    }

    //����ü ������
    S* ptr = (S*)malloc(sizeof(S) * 1);
    ptr->a = 1;
    ptr->c = 'a';

    // ** ������ NULL �־����
    //ù ��� �߰�
    Node* tmp = (Node*)malloc(sizeof(Node) * 1);
    tmp->data = 1;
    tmp->next = NULL;
    head = tmp;

    //��� ����; 
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
