// Accept number form user and check Whether number is even or odd.


#include <stdio.h>
#include <stdbool.h>

bool chkEven(int iNo)
{
    if (iNo % 2==0)
    return true;
    else
    return false;
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = chkEven(iValue);

    if (bRet == true)
    printf("Number is even ");
    else
    printf("Number is odd ");

    return 0;
}