#include "stdio.h"

int main()
{
    int n;
    printf("pls enter number UwU");
    scanf("%d", n);

    if (n > 0)
    {
        printf("The number %d is a positive number", n);
    }
    else if (n < 0)
    {
        printf("The number %d is a negative number");
    }
    else
    {
        printf("The number you have entered is invalid");
    }

    return 0;
}
