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

    if (*Head == NULL) 
    {
        *Head = newn;
    } 
    else 
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

int SecMaximum(PNODE Head) 
{
    if (Head == NULL || Head->Next == NULL) 
    {
        return -1;
    }

    int max = Head->Data > Head->Next->Data ? Head->Data : Head->Next->Data;
    int secondMax = Head->Data < Head->Next->Data ? Head->Data : Head->Next->Data;

    Head = Head->Next->Next;
    while (Head != NULL) 
    {
        if (Head->Data > max) 
        {
            secondMax = max;
            max = Head->Data;
        } 
        else if (Head->Data > secondMax && Head->Data != max) 
        {
            secondMax = Head->Data;
        }
        Head = Head->Next;
    }
    return secondMax;
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    int secMax = SecMaximum(First);
    printf("Second maximum element: %d\n", secMax);

    return 0;
}
