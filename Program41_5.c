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

int Minimum(PNODE Head) 
{
    if (Head == NULL)
    {
        return -1;
    }

    int min = Head->Data;
    Head = Head->Next;
    while (Head != NULL) 
    {
        if (Head->Data < min) 
        {
            min = Head->Data;
        }
        Head = Head->Next;
    }
    return min;
}

int main() 
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 1640);
    InsertFirst(&First, 1240);
    InsertFirst(&First, 201);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = Minimum(First);
    printf("Minimum element: %d\n", iRet);

    return 0;
}
