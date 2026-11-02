#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Bill {
    int consumerId;
    char name[50];
    float units;
    float totalAmount;
};

void calculateBill() {
    struct Bill b;
    FILE *fp;
    float ratePerUnit = 5.0; // Example rate

    printf("Enter Consumer ID: ");
    scanf("%d", &b.consumerId);
    printf("Enter Consumer Name: ");
    scanf("%s", b.name);
    printf("Enter Water Units Consumed: ");
    scanf("%f", &b.units);

    if(b.units <= 100) {
        b.totalAmount = b.units * ratePerUnit;
    } else {
        b.totalAmount = (100 * ratePerUnit) + ((b.units - 100) * (ratePerUnit * 1.5));
    }

    printf("\n--- Water Bill Details ---\n");
    printf("Consumer ID: %d\n", b.consumerId);
    printf("Name: %s\n", b.name);
    printf("Units Consumed: %.2f\n", b.units);
    printf("Total Bill Amount: ₹%.2f\n", b.totalAmount);

    fp = fopen("water_records.txt", "a");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(fp, "%d %s %.2f %.2f\n", b.consumerId, b.name, b.units, b.totalAmount);
    fclose(fp);
    printf("Record saved successfully to file!\n");
}

void viewRecords() {
    FILE *fp;
    struct Bill b;
    fp = fopen("water_records.txt", "r");
    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }
    printf("\n--- All Water Bill Records ---\n");
    printf("ID\tName\tUnits\tTotal Amount\n");
    while(fscanf(fp, "%d %s %f %f", &b.consumerId, b.name, &b.units, &b.totalAmount) != EOF) {
        printf("%d\t%s\t%.2f\t₹%.2f\n", b.consumerId, b.name, b.units, b.totalAmount);
    }
    fclose(fp);
}

int main() {
    int choice;
    do {
        printf("\n=== Water Usage Bill Calculator ===\n");
        printf("1. Calculate & Save Bill\n");
        printf("2. View All Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: calculateBill(); break;
            case 2: viewRecords(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while(choice != 3);

    return 0;
}