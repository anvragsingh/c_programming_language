#include <stdio.h>

int main()
{

    char ch = 'a';
    printf("the character is %c : \n", ch);
    scanf("%ch", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("this character is lowercase \n");
    }

    else
    {
        printf("this charcter is not lowercase");
    }
    return 0;
}