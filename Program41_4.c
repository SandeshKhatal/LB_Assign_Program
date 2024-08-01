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

int Maximum(PNODE Head) 
{
    if(Head == NULL)
    {
        return -1;
    }

    int max = Head->Data;
    Head = Head->Next;
    while (Head != NULL) 
    {
        if (Head->Data > max) 
        {
            max = Head->Data;
        }
        Head = Head->Next;
    }
    return max;
}

int main() 
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = Maximum(First);
    printf("Maximum element: %d\n", iRet);

    return 0;
}
