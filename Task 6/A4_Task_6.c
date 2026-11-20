
#include <stdio.h>
#include <string.h>

#define SIZE 4

struct Date {
    int day;
    int month;
    int year;
};

struct Item {
    int id;
    char name[30];
    int quantity;
    float price;
    struct Date expiry;
};

union Payment {
    float cash;
    float upiAmount;
};

struct Sale {
    int itemId;
    int quantity;
    int paymentType;
    union Payment payment;
};

void displayInventory(struct Item items[], int n)
{
    int i;

    printf("\nCANTEEN INVENTORY\n");

    for (i = 0; i < n; i++)
    {
        printf("%d. %s | Stock: %d | Price: Rs. %.2f\n",
               items[i].id,
               items[i].name,
               items[i].quantity,
               items[i].price);
    }
}

int main()
{
    struct Item items[SIZE] = {
        {101, "Rice", 20, 50.00, {22, 11, 2026}},
        {102, "Milk", 10, 25.00, {21, 11, 2026}},
        {103, "Bread", 15, 30.00, {25, 11, 2026}},
        {104, "Juice", 12, 40.00, {23, 11, 2026}}
    };

    struct Sale sale;
    float revenue = 0.0;
    float amount;
    int i, found;

    displayInventory(items, SIZE);

    printf("\nEnter Item ID to purchase: ");
    scanf("%d", &sale.itemId);

    printf("Enter quantity: ");
    scanf("%d", &sale.quantity);

    found = 0;

    for (i = 0; i < SIZE; i++)
    {
        if (items[i].id == sale.itemId)
        {
            found = 1;

            if (sale.quantity <= 0)
            {
                printf("Invalid quantity!\n");
                break;
            }

            if (sale.quantity > items[i].quantity)
            {
                printf("Sale rejected: Insufficient stock!\n");
                break;
            }

            /* Expiry warning: within two days */
            if (items[i].expiry.day <= 22 &&
                items[i].expiry.month == 11 &&
                items[i].expiry.year == 2026)
            {
                printf("Warning: Item is expiring soon!\n");
            }

            amount = sale.quantity * items[i].price;

            items[i].quantity -= sale.quantity;
            revenue += amount;

            printf("\nSale Successful!\n");
            printf("Item: %s\n", items[i].name);
            printf("Quantity: %d\n", sale.quantity);
            printf("Total Amount: Rs. %.2f\n", amount);

            printf("\nPayment Type (1-Cash, 2-UPI): ");
            scanf("%d", &sale.paymentType);

            if (sale.paymentType == 1)
            {
                sale.payment.cash = amount;
                printf("Cash Payment: Rs. %.2f\n",
                       sale.payment.cash);
            }
            else if (sale.paymentType == 2)
            {
                sale.payment.upiAmount = amount;
                printf("UPI Payment: Rs. %.2f\n",
                       sale.payment.upiAmount);
            }
            else
            {
                printf("Invalid payment type!\n");
            }

            break;
        }
    }

    if (!found)
    {
        printf("Item not found!\n");
    }

    printf("\nUPDATED INVENTORY\n");
    displayInventory(items, SIZE);

    printf("\nTOTAL REVENUE: Rs. %.2f\n", revenue);

    return 0;
}

