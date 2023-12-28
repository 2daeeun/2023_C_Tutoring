#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 연결 리스트의 노드를 나타내는 구조체
typedef struct node
{
    int data;
    struct node* next;
} NODE;

// 새로운 노드를 생성하는 함수
NODE* create_node(int value)
{
    NODE* new_node = (NODE*)malloc(sizeof(NODE));

    if (new_node == NULL)
    {
        printf("메모리 할당 오류\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = value;
    new_node->next = NULL;

    return new_node;
}

// 연결 리스트에 노드를 추가하는 함수
void insert_node(NODE** head, int value)
{
    NODE* new_node = create_node(value);

    if (*head == NULL)
    {
        // 리스트가 비어있을 경우
        *head = new_node;
    }
    else
    {
        // 리스트가 비어있지 않을 경우
        NODE* temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

// 연결 리스트의 노드를 출력하는 함수
void print_list(NODE* head)
{
    NODE* temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// 메모리 해제 함수
void free_list(NODE* head)
{
    NODE* temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("메모리 해제 완료\n");
}

int main()
{
    NODE* my_list = NULL;

    // 연결 리스트에 노드 추가
    insert_node(&my_list, 10);
    insert_node(&my_list, 20);
    insert_node(&my_list, 30);
    insert_node(&my_list, 40);

    // 연결 리스트 출력
    printf("연결 리스트: ");
    print_list(my_list);

    // 메모리 해제
    free_list(my_list);

    return 0;
}