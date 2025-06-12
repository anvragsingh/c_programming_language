#include <stdio.h>

int main()
{

    int income, tax;
    printf("enter income: \n");
    scanf("%d", &income);

    if (income < 250000)
    {
        tax = 0;
        printf("you are exempted from tax slab");
    }

    else if (income > 250001 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
        printf("you are liable of 5 percent of your income under taax slab \n");
    }

    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
        printf("you are liable of 20 percent of your income under tax slab \n");
    }

    else if (income > 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
        printf("you are liable of 30 percent of your income under tax slab \n");
    }

    else
    {
        printf("contact income tax dept immediately");
    }
    printf("tax cal is %d", tax);

    return 0;
}