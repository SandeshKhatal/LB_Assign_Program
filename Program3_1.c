#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
       return ;
    }

    int iCnt = 0;
    int num = 2;    //even number start from 2

    while(iCnt<iNo)
    {
       printf("%d\n",num);
       num += 2;          //move to next even number
       iCnt++;
    }
}
int main()
{
   int iValue = 0;

   printf("Enter number: \n");
   scanf("%d",&iValue);

   PrintEven(iValue);
   return 0;
}