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

BOOL IsPerfect(int num) 
{
    int sum = 1;

    for (int i = 2; i <= num / 2; ++i) 
    {
        if (num % i == 0) 
        {
            sum += i;
        }
    }
    return (sum == num && num != 1);
}

void DisplayPerfect(PNODE Head) 
{
    while (Head != NULL) 
    {
        if (IsPerfect(Head->Data)) 
        {
            printf("%d ", Head->Data);
        }
        Head = Head->Next;
    }
    printf("\n");
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

    DisplayPerfect(First);

    return 0;
}
