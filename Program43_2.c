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

BOOL IsPalindrome(int num) 
{
    int originalNum = num, reversedNum = 0;
    while (num != 0) 
    {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return (originalNum == reversedNum);
}

void DisplayPallindrome(PNODE Head) 
{
    while (Head != NULL) 
    {
        if (IsPalindrome(Head->Data)) 
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
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    DisplayPallindrome(First);

    return 0;
}
