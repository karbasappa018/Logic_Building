#include<stdio.h>

void Display(char *str)
{
    while(*str != '\0')
    {
        printf("%c",*str);
        str++;
    }

    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
    Display(Arr);

    return 0;
}