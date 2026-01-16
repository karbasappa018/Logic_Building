#include<stdio.h>

int AdditionTwoNumbers(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;    // Business Logic
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);
    
    iRet = AdditionTwoNumbers(iValue1,iValue2);

    printf("Addition is : %d\n",iRet);

    return 0;
}