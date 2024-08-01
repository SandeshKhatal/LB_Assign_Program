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

int SearchFirstOcc(PNODE Head, int no) 
{
    int iPos = 1;
    while (Head != NULL) 
    {
        if (Head->Data == no) 
        {
            return iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return -1; 
}

int main() 
{
    PNODE First = NULL;
    int iNo = 0;
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    printf("Enter element to search first occurrence: ");
    scanf("%d", &iNo);

    iRet = SearchFirstOcc(First, iNo);
    if (iRet != -1) 
    {
        printf("First occurrence of %d is at position %d\n", iNo, iRet);
    } 
    else 
    {
        printf("Element %d not found\n", iNo);
    }
    return 0;
}
