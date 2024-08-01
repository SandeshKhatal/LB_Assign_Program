#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue >='a' && CValue <='z')            
    {
        printf("%c",CValue - 32);       //convert lowercase to uppercase
    }
    else if(CValue >='A' && CValue <='Z')            
    {
        printf("%c",CValue + 32);       //convert uppercase to lowercase
    }
}
int main()
{
   char cValue = 0;

   printf("Enter character: \n");
   scanf("%c",&cValue);

   DisplayConvert(cValue);
   return 0;
}