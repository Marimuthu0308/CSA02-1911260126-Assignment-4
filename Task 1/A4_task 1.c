
#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 100
#define NAME_SIZE 50
#define PHONE_SIZE 16

struct Date {
    int day, month, year;
};

struct BloodPressure {
    int systolic;
    int diastolic;
};

struct Patient {
    char name[NAME_SIZE];
    int age;
    char phone[PHONE_SIZE];
    struct BloodPressure bp;
    struct Date visitDate;
};

int addPatient(struct Patient patients[], int *count,
               const struct Patient *newPatient)
{
    if (patients == NULL || count == NULL || newPatient == NULL)
        return 0;

    if (*count < 0 || *count >= MAX_PATIENTS)
        return 0;

    patients[*count] = *newPatient;
    ++(*count);

    return 1;
}

int main()
{
    struct Patient patients[MAX_PATIENTS];
    int count = 0;

    struct Patient p1 = {
        "Arun",
        20,
        "9876543210",
        {120, 80},
        {20, 11, 2026}
    };

    if (addPatient(patients, &count, &p1)) {
        printf("Patient added successfully!\n");

        printf("\nPatient Details\n");
        printf("Name: %s\n", patients[0].name);
        printf("Age: %d\n", patients[0].age);
        printf("Phone: %s\n", patients[0].phone);

        printf("Blood Pressure: %d/%d\n",
               patients[0].bp.systolic,
               patients[0].bp.diastolic);

        printf("Visit Date: %02d/%02d/%d\n",
               patients[0].visitDate.day,
               patients[0].visitDate.month,
               patients[0].visitDate.year);

        printf("Total Patients: %d\n", count);
    }
    else {
        printf("Unable to add patient.\n");
    }

    return 0;
}

