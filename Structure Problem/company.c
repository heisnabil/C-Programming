#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store employee details
struct Employee {
    char name[50];
    char department[50];
    char joining_date[20];
    float salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    // Dynamic memory allocation for array of employees
    struct Employee *employees = (struct Employee*) malloc(n * sizeof(struct Employee));
    
    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Department: ");
        scanf("%s", employees[i].department);
        printf("Joining Date (YYYY-MM-DD): ");
        scanf("%s", employees[i].joining_date);
        printf("Salary: ₹");
        scanf("%f", &employees[i].salary);
    }
    
    // Print employees with salary greater than ₹50,000
    printf("\nEmployees with salary greater than ₹50,000:\n");
    for (int i = 0; i < n; i++) {
        if (employees[i].salary > 50000) {
            printf("Name: %s, Department: %s, Joining Date: %s, Salary: ₹%.2f\n",
                   employees[i].name, employees[i].department, employees[i].joining_date, employees[i].salary);
        }
    }
    
    // Free dynamically allocated memory
    free(employees);
    
    return 0;
}
