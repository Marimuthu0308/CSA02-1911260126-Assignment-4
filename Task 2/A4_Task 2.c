
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Address {
    char city[30];
    int pincode;
};

struct Parcel {
    int id;
    float weight;
    struct Address receiver;
    struct Date bookingDate;
};

/* Function to print parcel details */
void print_parcel(struct Parcel *p)
{
    printf("Parcel ID: %d\n", p->id);
    printf("Weight: %.2f kg\n", p->weight);
    printf("Receiver City: %s\n", p->receiver.city);
    printf("Pincode: %d\n", p->receiver.pincode);
    printf("Booking Date: %02d/%02d/%d\n",
           p->bookingDate.day,
           p->bookingDate.month,
           p->bookingDate.year);
    printf("-------------------------\n");
}

/* Selection sort based on parcel weight */
void sort_by_weight(struct Parcel p[], int n)
{
    int i, j, min;
    struct Parcel temp;

    for (i = 0; i < n - 1; i++)
    {
        min = i;

        for (j = i + 1; j < n; j++)
        {
            if (p[j].weight < p[min].weight)
                min = j;
        }

        if (min != i)
        {
            temp = p[i];
            p[i] = p[min];
            p[min] = temp;
        }
    }
}

int main()
{
    int i;

    struct Parcel parcels[3] = {
        {101, 5.5, {"Chennai", 600001}, {10, 11, 2026}},
        {102, 2.5, {"Madurai", 625001}, {11, 11, 2026}},
        {103, 4.0, {"Salem", 636001}, {12, 11, 2026}}
    };

    printf("PARCEL DETAILS BEFORE SORTING\n");
    for (i = 0; i < 3; i++)
    {
        print_parcel(&parcels[i]);
    }

    sort_by_weight(parcels, 3);

    printf("\nPARCEL DETAILS AFTER SORTING BY WEIGHT\n");
    for (i = 0; i < 3; i++)
    {
        print_parcel(&parcels[i]);
    }

    /* Access third parcel using dot operator */
    printf("\nThird parcel pincode: %d\n",
           parcels[2].receiver.pincode);

    /* Access third parcel using pointer and arrow operator */
    {
        struct Parcel *ptr = &parcels[2];
        printf("Using pointer: %d\n", ptr->receiver.pincode);
    }

    return 0;
}

