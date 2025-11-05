#include <stdio.h>

#define MAX_EMPLOYEES 100

// Define structure for Employee
struct Employee {
    char name[50];
    float basic_pay;
    float gross_salary;
};

int main() {
    struct Employee emp[MAX_EMPLOYEES];
    int i;

    printf("Enter details for %d employees:\n", MAX_EMPLOYEES);

    // Input employee details
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);  // Read full name including spaces
        printf("Basic Pay: ");
        scanf("%f", &emp[i].basic_pay);

        // Calculate DA and gross salary
        float da = 0.52 * emp[i].basic_pay;
        emp[i].gross_salary = emp[i].basic_pay + da;
    }

    // Display employee name and gross salary
    printf("\n--- Monthly Pay Details ---\n");
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        printf("Employee %d: %-20s Gross Salary: ₹%.2f\n", i + 1, emp[i].name, emp[i].gross_salary);
    }

    return 0;
}
