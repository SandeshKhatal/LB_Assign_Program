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

int SmallestDigit(int num) 
{
    int min = 9;

    while (num != 0) 
    {
        int digit = num % 10;
        if (digit < min) 
        {
            min = digit;
        }
        num /= 10;
    }
    return min;
}

void DisplaySmall(PNODE Head) 
{
    while (Head != NULL) 
    {
        printf("%d ", SmallestDigit(Head->Data));
        Head = Head->Next;
    }
    printf("\n");
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 1415);
    InsertFirst(&First, 15321);
    InsertFirst(&First, 1250);
    InsertFirst(&First, 11);

    DisplaySmall(First);

    return 0;
}
