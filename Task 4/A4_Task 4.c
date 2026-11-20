
#include <stdio.h>

struct Account {
    int accountNumber;
    char name[30];
    float balance;
};

/* Display account using structure pointer */
void displayAccount(struct Account *ptr)
{
    printf("\nInside Function\n");
    printf("Address of account: %p\n", (void *)ptr);
    printf("Account Number: %d\n", ptr->accountNumber);
    printf("Account Holder: %s\n", ptr->name);
    printf("Balance: Rs. %.2f\n", ptr->balance);
}

/* Update balance using pointer */
void updateBalance(struct Account *ptr, float amount)
{
    ptr->balance = ptr->balance + amount;
}

int main()
{
    struct Account acc = {1001, "Marimuthu", 5000.00};

    printf("BANK ACCOUNT DETAILS\n");
    printf("Address in Main: %p\n", (void *)&acc);

    displayAccount(&acc);

    updateBalance(&acc, 1500.00);

    printf("\nAfter Balance Update\n");
    printf("Account Number: %d\n", acc.accountNumber);
    printf("Account Holder: %s\n", acc.name);
    printf("Updated Balance: Rs. %.2f\n", acc.balance);

    return 0;
}

