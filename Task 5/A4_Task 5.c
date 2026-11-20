
#include <stdio.h>

/* Static variable example */
void staticCounter()
{
    static int count = 1000;
    count++;
    printf("Static Counter: %d\n", count);
}

/* Automatic variable example */
void autoCounter()
{
    int count = 1000;
    count++;
    printf("Automatic Counter: %d\n", count);
}

/* Token counter */
void tokenCounter()
{
    static int veg = 0;
    static int nonveg = 0;
    int choice;

    printf("\nEnter 1 for Veg or 2 for Non-Veg: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        veg++;
    }
    else if (choice == 2)
    {
        nonveg++;
    }
    else
    {
        printf("Invalid choice!\n");
        return;
    }

    printf("Veg Tokens: %d\n", veg);
    printf("Non-Veg Tokens: %d\n", nonveg);
}

int main()
{
    int i;

    printf("STATIC VARIABLE OUTPUT\n");
    for (i = 0; i < 3; i++)
    {
        staticCounter();
    }

    printf("\nAUTOMATIC VARIABLE OUTPUT\n");
    for (i = 0; i < 3; i++)
    {
        autoCounter();
    }

    printf("\nCANTEEN TOKEN COUNTER\n");

    tokenCounter();
    tokenCounter();
    tokenCounter();

    return 0;
}

