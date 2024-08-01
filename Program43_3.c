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

int ProductOfDigits(int num) 
{
    int product = 1;

    while (num != 0) 
    {
        int digit = num % 10;
        if (digit != 0) 
        {
            product *= digit;
        }
        num /= 10;
    }
    return product;
}

void DisplayProduct(PNODE Head) 
{
    while (Head != NULL) 
    {
        printf("%d ", ProductOfDigits(Head->Data));
        Head = Head->Next;
    }
    printf("\n");
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayProduct(First);

    return 0;
}
