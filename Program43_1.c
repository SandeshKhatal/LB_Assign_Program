#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node 
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no) 
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL) 
    {
        *Head = newn;
    } 
    else 
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

int ReverseNumber(int num) 
{
    int rev = 0;
    while (num != 0) 
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

void Reverse(PNODE Head) 
{
    while (Head != NULL) 
    {
        printf("|%d|->", ReverseNumber(Head->Data));
        Head = Head->Next;
    }
    printf("NULL\n");
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Reverse(First);

    return 0;
}
