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

int LargestDigit(int num) 
{
    int max = 0;

    while (num != 0) 
    {
        int digit = num % 10;
        if (digit > max) 
        {
            max = digit;
        }
        num /= 10;
    }
    return max;
}

void DisplayLarge(PNODE Head) 
{
    while (Head != NULL) 
    {
        printf("%d ", LargestDigit(Head->Data));
        Head = Head->Next;
    }
    printf("\n");
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 419);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);

    DisplayLarge(First);

    return 0;
}
